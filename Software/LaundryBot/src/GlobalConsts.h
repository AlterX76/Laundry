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

/*
-- constanti globali da utilizzare all'interno del software:
*/
#ifndef _GlobalConsts_H
	#define _GlobalConsts_H
	//
	// seguono le costanti necessarie per il funzionamento del software:
	#define SOFTWARE_VERSION	" - versione 1.0"
	#define SETTING_KEY_DBSERVER	"dbServerName"
	#define SETTING_KEY_DBNAME	"dbName"
	#define SETTING_KEY_DBUSER	"dbUsername"
	#define SETTING_KEY_DBPASSWD	"dbPassword"
	//
	// costanti per il database:
	#define DRIVER_DATABASE		"QMYSQL"
	#define NO_DATABASE_CONNECTION	"Connessione con l'archivio centrale non riuscito.\nLa causa potrebbe essere in una errata configurazione delle informazioni di accesso verso il database."
	//
	// menu sulla destra della finestra principale:
	#define SHORTKEY_TAB_ANA	0
	#define SHORTKEY_TAB_COMMESSA	1
	#define SHORTKEY_TAB_CONFIG	2
	#define SHORTKEY_TAB_USERSEARCH	3

#endif // _GlobalConsts_H
