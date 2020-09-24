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


#include "QKeyPushButton.h"
#include "widgetKeyBoard.h"


QKeyPushButton::QKeyPushButton(QWidget *parent) : QPushButton(parent), m_parent(parent)
{
	this->setStyleSheet(QString(DEFAULT_STYLE_BUTTON) + QString(DEFAULT_BACKGROUND_BUTTON));
	connect(this, SIGNAL(pressedKey(bool)), SLOT(getKeyPress(bool)));
}

void QKeyPushButton::getKeyPress(bool capsStatus)
{
	int 		keyCode = 0;
	QKeyEvent	*key = NULL;
	QString		text = this->text();
	//
	// per tutti i car speciali tranne il CAPS (RETURN, ALT, SHIFT, ecc...) inoltra al componente widgetKeyBoard:
	if (text.contains(KEY_BACKSPACE, Qt::CaseInsensitive) == true || text.contains(KEY_TAB, Qt::CaseInsensitive) == true ||
			text.contains(KEY_RETURN, Qt::CaseInsensitive) == true || text.contains(KEY_CTRL, Qt::CaseInsensitive) == true ||
			text.contains(KEY_ALT, Qt::CaseInsensitive) == true || text.contains(KEY_ALT_GR, Qt::CaseInsensitive) == true)
		key = new QKeyEvent(QEvent::KeyPress, keyCode, Qt::NoModifier, text);
	else { // trattasi di caratteri stampabili
                keyCode = text.toUtf8()[0]; // prende il valore numerico (sempre maiuscolo)
		if (capsStatus == false) { // se deve prendere minuscolo, controlla se il carattere è alfabetico
			if (keyCode >= 'A' && keyCode <= 'Z') {
				keyCode += 32; // carattere piccolo
				text = (char ) keyCode; // carattere piccolo
			}
			key = new QKeyEvent(QEvent::KeyPress, keyCode, Qt::NoModifier, text);
		}
		else
			key = new QKeyEvent(QEvent::KeyPress, keyCode, Qt::ShiftModifier, text);
	}
	((widgetKeyBoard *) this->m_parent)->receiptChildKey(key);
	QCoreApplication::processEvents();
}


void QKeyPushButton::mousePressEvent(QMouseEvent *event)
{
	static bool 	m_capsActive = true;
	QString		text = this->text();
	//
	// se si tratta del maiuscolo:
	if (text.contains(KEY_CAPS, Qt::CaseInsensitive) == true) {
		if (m_capsActive == false) {
			this->setStyleSheet(QString(DEFAULT_STYLE_BUTTON) + QString(CHANGED_BACKGROUND_BUTTON));
			m_capsActive = true;
		}
		else {
			this->setStyleSheet(QString(DEFAULT_STYLE_BUTTON) + QString(DEFAULT_BACKGROUND_BUTTON));
			m_capsActive = false;
		}
		this->repaint();
		QCoreApplication::processEvents();
	}
	else {
		this->setStyleSheet(QString(DEFAULT_STYLE_BUTTON) + QString(CHANGED_BACKGROUND_BUTTON));
		this->repaint();
		QCoreApplication::processEvents();
		emit pressedKey(m_capsActive);
	}
}

void QKeyPushButton::mouseReleaseEvent(QMouseEvent *event)
{
	if (this->text().contains(KEY_CAPS, Qt::CaseInsensitive) == false)
		this->setStyleSheet(QString(DEFAULT_STYLE_BUTTON) + QString(DEFAULT_BACKGROUND_BUTTON));
}
