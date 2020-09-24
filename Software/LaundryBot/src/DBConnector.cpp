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
#include <QMessageBox>
#include "DBConnector.h"
#include "GlobalConsts.h"



DBConnector::DBConnector(QSettings *store) : m_db(QSqlDatabase::addDatabase(DRIVER_DATABASE)), m_settings(store)
{
	this->reloadFromSettings();
}

DBConnector::~DBConnector()
{
	this->close();
}


void DBConnector::reloadFromSettings(void)
{
	this->m_db.setHostName(this->m_settings->value(SETTING_KEY_DBSERVER).toString());
	this->m_db.setUserName(this->m_settings->value(SETTING_KEY_DBUSER).toString());
	this->m_db.setPassword(this->m_settings->value(SETTING_KEY_DBPASSWD).toString());	
	this->m_db.setDatabaseName(this->m_settings->value(SETTING_KEY_DBNAME).toString());	
}


QString& DBConnector::returnError(QSqlQuery& rst)
{
	static QString	error;

	if (rst.lastError().text().trimmed().length() == 0)
		error = "Il collegamento al database potrebbe non essere valido!";
	else
		error = rst.lastError().text();
	return (error);

}


int DBConnector::executeNoQuery(const char *functionName)
{
	QSqlQuery			rst(this->m_db);
	QString				stored(functionName + QString("("));
	QList<pairParam *>::iterator 	i = this->m_paramArray.begin();	
		
	while (i != this->m_paramArray.end()) {
		stored += (*i)->first + QString(", ");
		i++;
	}
	stored = "set @ret = " + stored.left(stored.length() - 2) + ");";
	rst.prepare(stored);
	i = this->m_paramArray.begin();
	while (i != this->m_paramArray.end()) {
		rst.bindValue((*i)->first, (*i)->second);
		i++;
	}
	if (rst.exec() == true) { // eseguita con successo!
		this->clearParamArray();
		if (rst.exec("SELECT @ret") == false) { // reperisce il valore di ritorno (per limitazioni QMYSQL)			
			QMessageBox::critical(NULL, "Alert operazione", "Problemi durante le operazioni verso il database:\n\nErrore: " + this->returnError(rst), QMessageBox::Ok, QMessageBox::Ok);
			qApp->processEvents();
			return (0);
		}
		rst.next();
		return (rst.value(0).toInt());
	}
	else {
		QMessageBox::critical(NULL, "Alert operazione", "Problemi durante le operazioni verso il database:\n\nErrore: " + this->returnError(rst), QMessageBox::Ok, QMessageBox::Ok);
		this->clearParamArray();
		qApp->processEvents();
		return (0);
	}
}


void DBConnector::insertNewParam(const char *key, QVariant value)
{
	this->m_paramArray.enqueue(new pairParam(key, value));
}


void DBConnector::clearParamArray(void)
{
	this->m_paramArray.clear();
}


void DBConnector::open(void)
{
	this->m_db.open();
}


void DBConnector::close(void)
{
	if (this->m_db.isOpen() == true)
		this->m_db.close();
	this->reloadFromSettings();	
}

bool DBConnector::isOpened(void)
{
	return (this->m_db.isOpen());
}
