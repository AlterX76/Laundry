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

#include <QtGui>
#include <QPushButton>

#ifndef _QKEYPUSHBUTTON_H
	//
	// colori e stile da utilizzare per la tastiera ed i tasti:
	#define _QKEYPUSHBUTTON_H
	#define DEFAULT_STYLE_BUTTON		"color:white;border: 2px solid black;border-radius:5px;font-weight: bold;font-size:17px;"
	#define DEFAULT_BACKGROUND_BUTTON	"background:gray;"
	#define CHANGED_BACKGROUND_BUTTON	"background:red;"
	//
	// tasti speciali utilizzati all'interno delle classi:
	#define KEY_TAB				"TAB"
	#define KEY_ALT				"ALT"
	#define KEY_ALT_GR			"ALT Gr"
	#define KEY_CAPS			"CAPS"
	#define KEY_CTRL			"CTRL"
	#define KEY_SHIFT			"SHIFT"
	#define KEY_BACKSPACE			"BACKSPACE"
	#define KEY_RETURN			"INVIO"
	//
	//
	// definizione classe rappresentante un tasto:
	class QKeyPushButton : public QPushButton {
		Q_OBJECT
	
		public:
			QKeyPushButton(QWidget *parent = 0);
	
		private slots:
			void 		getKeyPress(bool statusCaps);
		
		signals:
			void 		pressedKey(bool statusCaps);

		private:
			QWidget		*m_parent;
	
		protected:
			void 		mousePressEvent(QMouseEvent *event);
			void 		mouseReleaseEvent(QMouseEvent *event);
	};

#endif // _QKEYPUSHBUTTON_H
