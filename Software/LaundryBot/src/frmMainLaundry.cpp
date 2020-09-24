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


#include "frmMainLaundry.h"
#include "frmNuovoCliente.h"
#include "frmDBSettings.h"
#include "DBConnector.h"
#include "GlobalConsts.h"

#include <QMessageBox>
#include <QMdiSubWindow>

frmMainLaundry::frmMainLaundry(QMainWindow *parent) : QMainWindow(parent), myDB(&mySettings)
{
	ui.setupUi(this);
	//
	// controlla se esiste già un file di configurazione:
	if (this->mySettings.value(SETTING_KEY_DBSERVER).toString().length() == 0) {
		this->ui.toolBoxShortKey->setCurrentIndex(SHORTKEY_TAB_CONFIG);
		this->ui.lblInfoSettings->setVisible(true);
	}
	else
		this->ui.lblInfoSettings->setVisible(false);
	this->setWindowTitle(QCoreApplication::applicationName() + SOFTWARE_VERSION);
	this->setWindowState(Qt::WindowMaximized);	
	//this->setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);
	//
	// - IMPOSTAZIONE DEGLI SLOT PER I PULSANTI DEL SOFTWARE:
	connect(this->ui.cmdUscitaProgramma, SIGNAL(pressed()), this, SLOT(close()));
	connect(this->ui.cmdNuovoCliente, SIGNAL(pressed()), this, SLOT(runNuovoCliente()));
	connect(this->ui.cmdDBSettings, SIGNAL(pressed()), this, SLOT(runDBSettings()));
	connect(this->ui.cmdTastieraVirtuale, SIGNAL(clicked()), SLOT(openVirtualKeyBoard()));
	connect(this->ui.cmdRicercaCliente, SIGNAL(clicked()), SLOT(openUserSearch()));
	connect(this->ui.cmdReturnAnagrafica, SIGNAL(clicked()), SLOT(clearUserFilterField()));
	connect(&this->mdi, SIGNAL(subWindowActivated( QMdiSubWindow* )), this, SLOT(activatedWindow(QMdiSubWindow *)));
	this->setCentralWidget(&this->mdi);
	QLinearGradient tm(10, 0, 600, 900);
	this->mdi.setBackground(QBrush(tm));
	this->ui.toolBoxShortKey->setMinimumWidth(200);
}


frmMainLaundry::~frmMainLaundry()
{
}


void frmMainLaundry::setShortKeyTab(short index)
{
	this->ui.toolBoxShortKey->setCurrentIndex(index);
}


void frmMainLaundry::activatedWindow(QMdiSubWindow *window)
{
	if (this->ui.cmdTastieraVirtuale->isChecked() == true) {
		this->VirtualKeyBoard.hide(true);
		openVirtualKeyBoard();
	}
}


void frmMainLaundry::openUserSearch(void)
{
	this->setShortKeyTab(SHORTKEY_TAB_USERSEARCH);
}


void frmMainLaundry::clearUserFilterField(void)
{
	this->ui.txtFiltroNomeCliente->setText("");
	this->ui.txtFiltroCognomeCliente->setText("");
	this->ui.txtFiltroCodiceFiscaleIvaCliente->setText("");
}


void frmMainLaundry::openVirtualKeyBoard(void)
{
	QMdiSubWindow *window = this->mdi.activeSubWindow();
		
	if (window != NULL) {
		if (this->ui.cmdTastieraVirtuale->isChecked() == true)
			this->VirtualKeyBoard.show(window->widget());
		else {
			this->ui.cmdTastieraVirtuale->setChecked(false);
			this->VirtualKeyBoard.hide(true);
		}
		qApp->processEvents();
		return;
	}
	this->ui.cmdTastieraVirtuale->setChecked(false);
	this->VirtualKeyBoard.hide(false);
}


void frmMainLaundry::closeEvent(QCloseEvent *event)
{
	bool 	isKeyBoardShown = this->ui.cmdTastieraVirtuale->isChecked();
	QWidget	*activeWindow = NULL;

	if (this->mdi.activeSubWindow() != NULL)
		activeWindow = this->mdi.activeSubWindow()->widget();
	if (activeWindow != NULL && isKeyBoardShown) {
		this->ui.cmdTastieraVirtuale->setChecked(false);
		this->VirtualKeyBoard.hide(true);
	}
	qApp->processEvents();
	QMessageBox::StandardButtons ret = QMessageBox::question(this, "Richiesta utente", "E' stata richiesta la chiusura del programma.\nSi desidera continuare con l'operazione?",
			QMessageBox::Yes | QMessageBox::No, QMessageBox::No);
	if (ret == QMessageBox::No) {
		if (activeWindow != NULL && isKeyBoardShown) {
			this->ui.cmdTastieraVirtuale->setChecked(true);
			qApp->processEvents();
		}		
		event->ignore();
	}
	else {
		this->mdi.closeActiveSubWindow();
		this->VirtualKeyBoard.hide(false);
		event->accept();
	}
}



void frmMainLaundry::setKeyBoardButton(bool checked)
{
	this->ui.cmdTastieraVirtuale->setChecked(checked);
}


void frmMainLaundry::showForm(QWidget *form)
{
	QMdiSubWindow 	*tmp = NULL;
	QWidget		*curForm = NULL;
	//
	// verifica se il form richiesto è già presente: se così, gli da il focus e non crea una nuova finestra:
	foreach (tmp, this->mdi.subWindowList()) {
		curForm = tmp->widget();
		if (curForm != NULL &&  curForm->objectName().contains(form->objectName()) == true) {
			this->mdi.setActiveSubWindow(tmp); // attiva la finestra già presente
			if (curForm->windowState() == Qt::WindowMinimized)
				curForm->setWindowState(Qt::WindowNoState);
			delete (form);
			return;
		}
	}
	form->setAttribute(Qt::WA_DeleteOnClose);
	QMdiSubWindow *tmpSubWin = new QMdiSubWindow();
	
	tmpSubWin->setWidget(form);	
	this->mdi.addSubWindow(tmpSubWin);
	tmpSubWin->setVisible(true);
}


void frmMainLaundry::runDBSettings(void)
{
	frmDBSettings *newDBSettings = new frmDBSettings(this);
	showForm(newDBSettings);
}


void frmMainLaundry::runNuovoCliente(void)
{	
	frmNuovoCliente *newClient = new frmNuovoCliente(this);		
	showForm(newClient);
}
