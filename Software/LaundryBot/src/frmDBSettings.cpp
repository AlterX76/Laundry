/***************************************************************************
 *   Copyright (C) 2008 by Giovanni Romano   *
 *   Giovanni.Romano.76@gmail.com   *
 *                                                                         *
 *   This program may be distributed under the terms of the Q Public       *
 *   License as defined by Trolltech AS of Norway and appearing in the     *
 *   file LICENSE.QPL included in the packaging of this file.              *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                  *
 ***************************************************************************/

#include "frmDBSettings.h"
#include "frmMainLaundry.h"
#include "GlobalConsts.h"

#include <QMessageBox>


frmDBSettings::frmDBSettings(QWidget *parent) : QWidget(parent)
{
	ui.setupUi(this);
	connect(this->ui.cmdReload, SIGNAL(pressed()), SLOT(ReloadSettings()));
	connect(this->ui.cmdUpdateSettings, SIGNAL(pressed()), SLOT(SaveSettings()));
	connect(this->ui.cmdRiconnectDB, SIGNAL(pressed()), SLOT(activateDBConnection()));
	ReloadSettings();
}


void frmDBSettings::closeEvent(QCloseEvent *)
{
	frmMainLaundry *parent = dynamic_cast<frmMainLaundry *>(qApp->activeWindow());
	
	parent->VirtualKeyBoard.hide(false);
	parent->setKeyBoardButton(false);
}



frmDBSettings::~frmDBSettings()
{
}


void frmDBSettings::ReloadSettings(void)
{
	frmMainLaundry *parent = dynamic_cast<frmMainLaundry *>(qApp->activeWindow());
	
	parent->setCursor(Qt::WaitCursor);
	qApp->processEvents();	
	this->ui.txtServerName->setText(parent->mySettings.value(SETTING_KEY_DBSERVER).toString());
	this->ui.txtNomeDatabase->setText(parent->mySettings.value(SETTING_KEY_DBNAME).toString());
	this->ui.txtUsername->setText(parent->mySettings.value(SETTING_KEY_DBUSER).toString());
	this->ui.txtPassword->setText(parent->mySettings.value(SETTING_KEY_DBPASSWD).toString());
	this->ui.cmdRiconnectDB->setEnabled(!parent->myDB.isOpened());
	parent->setCursor(Qt::ArrowCursor);
}


void frmDBSettings::activateDBConnection(void)
{
	frmMainLaundry *parent = static_cast<frmMainLaundry *>(qApp->activeWindow());

	parent->setCursor(Qt::WaitCursor);
	parent->myDB.close();
	qApp->processEvents();
	parent->myDB.open();
	if (parent->myDB.isOpened() == false) {
		this->ui.cmdRiconnectDB->setEnabled(true);
		QMessageBox::critical(parent, "Alert Database", "Connessione non andata a buon fine!\nCambiare i dati di accesso e riprovare.", QMessageBox::Ok, QMessageBox::Ok);
	}
	else {
		this->ui.cmdRiconnectDB->setEnabled(false);
		QMessageBox::information(parent, "Alert Database", "Connessione avvenuta con successo!", QMessageBox::Ok, QMessageBox::Ok);
	}
	parent->setCursor(Qt::ArrowCursor);
}


void frmDBSettings::SaveSettings(void)
{
	frmMainLaundry *parent = static_cast<frmMainLaundry *>(qApp->activeWindow());
	
	parent->setCursor(Qt::WaitCursor);
	qApp->processEvents();		
	parent->mySettings.setValue(SETTING_KEY_DBSERVER, this->ui.txtServerName->text());
	parent->mySettings.setValue(SETTING_KEY_DBNAME, this->ui.txtNomeDatabase->text());
	parent->mySettings.setValue(SETTING_KEY_DBUSER, this->ui.txtUsername->text());
	parent->mySettings.setValue(SETTING_KEY_DBPASSWD, this->ui.txtPassword->text());
	parent->mySettings.sync();
	this->ui.cmdRiconnectDB->setEnabled(true); // da la possibilità di tentare una connessione con le nuove impostazioni
	parent->setCursor(Qt::ArrowCursor);
	QMessageBox::information(this, "Info utente", "Nuove impostazioni memorizzate con successo!", QMessageBox::Ok, QMessageBox::Ok);
}
