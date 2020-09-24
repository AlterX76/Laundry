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

#include <QtGui>
#include <QMdiArea>
#include "ui_frmMainLaundry.h"
#include "DBConnector.h"
#include "widgetKeyBoard.h"
#include "GlobalConsts.h"



class frmMainLaundry : public QMainWindow {
	Q_OBJECT

	public:
		frmMainLaundry(QMainWindow *parent = 0);
		~frmMainLaundry();

		void showForm(QWidget *form);
		void setKeyBoardButton(bool checked);
		void setShortKeyTab(short index);
		//
		// oggetto per la persistenza delle preferenze software:
		QSettings 	mySettings; // utilizza organizationName ecc, impostati nel main.cpp
		DBConnector	myDB; // connessione al database
		widgetKeyBoard	VirtualKeyBoard; // tastiera virtuale da utilizzare nell'applicativo

	private:
		QMdiArea	mdi;
		Ui::MainWindow	ui;

	private slots:
		void runNuovoCliente(void);
		void runDBSettings(void);
		void openVirtualKeyBoard(void);
		void openUserSearch(void);
		void clearUserFilterField(void);
		void activatedWindow(QMdiSubWindow *window);

	protected:
		void closeEvent(QCloseEvent *event);
};
