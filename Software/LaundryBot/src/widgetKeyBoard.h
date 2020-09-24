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
#include <QLineEdit>

#ifndef _WIDGETKEYBOARD_H
	
	#define _WIDGETKEYBOARD_H

	#include "QKeyPushButton.h"
      #include <QWidget>
	//
	//
	// classe che crea e controlla la tastiera:
	class widgetKeyBoard : public QWidget {
		Q_OBJECT

		public:
			widgetKeyBoard(QWidget *activeForm = NULL, QWidget *parent = NULL);
			~widgetKeyBoard();

			void 			createKeyboard(void);
			void 			receiptChildKey(QKeyEvent *event, bool reset = false); // accoglie i tasti premuti

		public slots:
			void 			show(QWidget *activeForm);
			void 			hide(bool noChangeColor);

		protected:
			void			closeEvent (QCloseEvent * event);
			
		private:
			widgetKeyBoard(const widgetKeyBoard&);
			widgetKeyBoard& operator=(const widgetKeyBoard&);

			void			init_keyboard(void); // reinizializza le funzioni base della tastiera
			QKeyPushButton * 	createNewKey(QString keyValue);
			QLineEdit *		getNextTextbox(bool reset = false);

		private:
			QLineEdit		m_noFocusPalette; // usata per ripristinare la linetext senza focus
			QWidget			*m_activeWindow;
			QLineEdit		*m_currentTextBox; // mantiene il riferimento alla casella correntemente in uso
			static bool 		m_created;
	};

#endif // _WIDGETKEYBOARD_H
