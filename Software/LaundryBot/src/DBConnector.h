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

#include <QSettings>
#include <QQueue>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>


#ifndef _DBCONNECTOR_H
	#define _DBCONNECTOR_H

	typedef QPair<QString, QVariant>  pairParam;
	
	
	class DBConnector {
		public:
			DBConnector(QSettings *store);
			~DBConnector();
			//
			// funzioni per manipolare il database (connessione, chiusura ecc..):
			void 			open(void);
			void 			close(void);
			bool 			isOpened(void);
			int 			executeNoQuery(const char *stored); // esegue le stored procedures che restituiscono valori return per insert, update
			void			insertNewParam(const char *key, QVariant value); // utilizzata per inserire i parametri da usare nelle stored procedures
					
		private:
			//
			// funzioni per il salvataggio/caricamento delle informazioni:
			void			reloadFromSettings(void);
			inline QString&		returnError(QSqlQuery& rst);
			void 			clearParamArray(void);
			
		private:
			QSqlDatabase		m_db;
			QSettings		*m_settings;
			QQueue<pairParam *>	m_paramArray;
			
	};
#endif // _DBCONNECTOR_H

