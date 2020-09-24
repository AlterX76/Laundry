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


#include <QGuiApplication>
#include <QMessageBox>
#include <QSplashScreen>
#include "frmMainLaundry.h"


int main(int argc, char *argv[])
{
	Q_INIT_RESOURCE(laundry);
	
	QApplication 	app(argc, argv);
	QPixmap		imgSplash(":/SplashImage/splash");
	QSplashScreen	splash(imgSplash);
	
	splash.setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
	splash.setCursor(Qt::WaitCursor);	
	splash.show();
	splash.showMessage("Inizializzazione in corso...");
        QGuiApplication::processEvents();
	QCoreApplication::setOrganizationName("Giovanni Romano");
	QCoreApplication::setApplicationName("LaundryBot");
	QCoreApplication::setOrganizationDomain("laundrybot.com");
        //qApp->setStyle(new QWindowsStyle);

	splash.showMessage("Caricamento moduli e configurazioni in corso...");
        QGuiApplication::processEvents();
	frmMainLaundry tm;

	splash.showMessage("Caricamento tastiera virtuale in corso...");
        QGuiApplication::processEvents();
	tm.VirtualKeyBoard.createKeyboard(); // crea la tastiera virtuale

	short tryConn = 4;
	do {
		splash.showMessage("Connessione con l'archivio in corso...");
                QGuiApplication::processEvents();
		tm.myDB.open(); // prova ad aprire il database
		if (tm.myDB.isOpened() == true) break;
		--tryConn;
	} while (tryConn > 0);
	splash.showMessage("Apertura software in corso...");
        QGuiApplication::processEvents();
	tm.show();	
	splash.setCursor(Qt::ArrowCursor);
	splash.finish(&tm);	
	qApp->processEvents();
	if (tm.myDB.isOpened() == false) {
		QMessageBox::critical(&tm, "Database problem!", "Problemi nella connessione con il database. Controllare la configurazione.", QMessageBox::Ok, QMessageBox::Ok);
		tm.setShortKeyTab(SHORTKEY_TAB_CONFIG);
	}
	else
		tm.setShortKeyTab(SHORTKEY_TAB_ANA);
	return app.exec();
}


