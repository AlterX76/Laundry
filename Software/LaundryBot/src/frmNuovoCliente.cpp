/***************************************************************************
 *   Copyright (C) 2008 by Romano   *
 *   giovanni@mylinux   *
 *                                                                         *
 *   This program may be distributed under the terms of the Q Public       *
 *   License as defined by Trolltech AS of Norway and appearing in the     *
 *   file LICENSE.QPL included in the packaging of this file.              *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                  *
 ***************************************************************************/

#include "frmNuovoCliente.h"
#include "frmMainLaundry.h"
#include <QMessageBox>


frmNuovoCliente::frmNuovoCliente(QWidget *parent) : QWidget(parent)
{	
	ui.setupUi(this);		
	connect(this->ui.cmdMemorizzaNuovoCliente, SIGNAL(pressed()), SLOT(insertNewClient()));
	this->parent = dynamic_cast<frmMainLaundry *>(qApp->activeWindow());
	if (this->parent->myDB.isOpened() == false) {
		QMessageBox::critical(this, "Alert Database", NO_DATABASE_CONNECTION, QMessageBox::Ok, QMessageBox::Ok);
		this->parent->setShortKeyTab(SHORTKEY_TAB_CONFIG);
	}
}


void frmNuovoCliente::closeEvent(QCloseEvent * event)
{
	this->parent->VirtualKeyBoard.hide(false);
	this->parent->setKeyBoardButton(false);
}


frmNuovoCliente::~frmNuovoCliente()
{
}


void frmNuovoCliente::insertNewClient(void)
{	
	int	retNewID = 0;
	
	if (this->ui.txtNome->text().length() == 0 || this->ui.txtCognome->text().length() == 0 || this->ui.txtTelefono->text().length() == 0) {
		qApp->processEvents();
		QMessageBox::warning(this, "Alert dati", "Assicurarsi che tutti i campi obbligatori siano compilati.", QMessageBox::Ok, QMessageBox::Ok);
		return;
	}
	this->parent->setCursor(Qt::WaitCursor);	
	qApp->processEvents();
	this->parent->myDB.insertNewParam(":nome", this->ui.txtNome->text());
	this->parent->myDB.insertNewParam(":cognome", this->ui.txtCognome->text());
	this->parent->myDB.insertNewParam(":codiceFiscale", this->ui.txtCodiceFiscaleIva->text());
	this->parent->myDB.insertNewParam(":indirizzo", this->ui.txtIndirizzo->text());
	this->parent->myDB.insertNewParam(":tel", this->ui.txtTelefono->text());
	this->parent->myDB.insertNewParam(":cell", this->ui.txtCellulare->text());
	this->parent->myDB.insertNewParam(":mail", this->ui.txtEmail->text());
	retNewID = this->parent->myDB.executeNoQuery("sp_insertNewUtente");	
	if (retNewID > 0) { 
		QMessageBox::information(this->parent, "Informazione utente", "Inserimento del nuovo cliente avvenuto con successo.", QMessageBox::Ok, QMessageBox::Ok);
		this->ui.txtTelefono->setText(QString::null);
		this->ui.txtCellulare->setText(QString::null);
		this->ui.txtNome->setText(QString::null);
		this->ui.txtIndirizzo->setText(QString::null);
		this->ui.txtEmail->setText(QString::null);
		this->ui.txtCognome->setText(QString::null);
		this->ui.txtCodiceFiscaleIva->setText(QString::null);
	}
	this->parent->setCursor(Qt::ArrowCursor);	
}
