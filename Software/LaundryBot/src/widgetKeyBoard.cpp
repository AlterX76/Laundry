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


#include "widgetKeyBoard.h"
#include "frmMainLaundry.h"


bool widgetKeyBoard::m_created = false;


widgetKeyBoard::widgetKeyBoard(QWidget *activeForm, QWidget *parent) : QWidget(parent), m_activeWindow(activeForm), m_currentTextBox(NULL)
{
	this->setWindowIcon(QPixmap(":/TastieraVirtuale/logo"));
}

widgetKeyBoard::~widgetKeyBoard()
{
}


QKeyPushButton * widgetKeyBoard::createNewKey(QString keyValue)
{
	QKeyPushButton *tmp = new QKeyPushButton(this);

	tmp->setText(keyValue);
	tmp->setStyleSheet(QString(DEFAULT_STYLE_BUTTON) + QString(DEFAULT_BACKGROUND_BUTTON));
	tmp->setMinimumSize(54, 40);
	tmp->setMaximumSize(54, 40);
	//tmp->setMouseTracking(true);
	tmp->setVisible(true);
	return (tmp);
}

//
// riceve i caratteri che sono stati digitati:
void widgetKeyBoard::receiptChildKey(QKeyEvent *event, bool reset)
{
	static QLineEdit *nextInput = NULL;

	if (reset == true) { // reinizializza il controllo
		nextInput = this->getNextTextbox(true);
		return;
	}
	if (nextInput == NULL)
		return;
	//
	// inizia l'analisi del carattere ricevuto:
	QString	newKey = event->text();
	QString tmpReceiptString = nextInput->text();
	
	if (newKey.contains(KEY_RETURN, Qt::CaseInsensitive) == true || newKey.contains(KEY_TAB, Qt::CaseInsensitive) == true) { // trattasi di TAB, si sposta alla text successiva
		nextInput->setPalette(this->m_noFocusPalette.palette());
		nextInput = this->getNextTextbox();
		if (nextInput != NULL) nextInput->setFocus(Qt::TabFocusReason);
	}
	else if (newKey.contains(KEY_BACKSPACE, Qt::CaseInsensitive) == true) { // trattasi di CANCELLARE carattere, si sposta alla text successiva
		tmpReceiptString = tmpReceiptString.left(tmpReceiptString.length() - 1);
		nextInput->setText(tmpReceiptString);
	}
	else if (newKey.contains(KEY_CTRL, Qt::CaseInsensitive) == true || newKey.contains(KEY_ALT, Qt::CaseInsensitive) == true || newKey.contains(KEY_ALT_GR, Qt::CaseInsensitive) == true)
		; // non esegue nessuna operazione
	else { // si tratta di un carattere da visualizzare nella casella di testo corrente
		tmpReceiptString += newKey;
		nextInput->setText(tmpReceiptString);
	}
}


QLineEdit * widgetKeyBoard::getNextTextbox(bool reset)
{
	static QWidget	*nextInput = NULL;
	QLineEdit		*tmpInputFound = NULL;

	this->m_currentTextBox = NULL;
	if (this->m_activeWindow == NULL) { // nessuna finestra principale su cui operare
		nextInput = NULL;
		return (NULL);
	}
	//
	// cicla nella catena dei controlli in ordine di focus per ottenere la QEditLine
	if (nextInput == NULL || reset == true)
		nextInput = this->m_activeWindow->nextInFocusChain();
	else
		nextInput = nextInput->nextInFocusChain();
	do {
		if (nextInput->inherits("QLineEdit") == true) { // trovata una casella di testo da utilizzare
			tmpInputFound = dynamic_cast<QLineEdit *>(nextInput);
			this->m_currentTextBox = tmpInputFound;
			tmpInputFound->setPalette(Qt::red);
			return (tmpInputFound);
		}
		nextInput = nextInput->nextInFocusChain();
	} while (nextInput != NULL);
	return (NULL);
}


void widgetKeyBoard::init_keyboard(void)
{
	this->m_currentTextBox = NULL;
	this->receiptChildKey(NULL, true);
}


void widgetKeyBoard::show(QWidget *activeForm)
{
        this->m_activeWindow = activeForm;
	this->init_keyboard();
	if (this->windowState() == Qt::WindowMinimized)
                this->setWindowState(Qt::WindowNoState);
        this->move(20, QGuiApplication::primaryScreen()->geometry().height() - this->height() - 200);
	this->setWindowFlags(Qt::Dialog | Qt::WindowStaysOnTopHint | Qt::MSWindowsFixedSizeDialogHint);	
	QWidget::show();
}



void widgetKeyBoard::closeEvent(QCloseEvent * event)
{
	event->ignore();
}


void widgetKeyBoard::hide(bool changeColor)
{	
	if (changeColor == true)
		if (this->m_activeWindow != NULL && this->m_currentTextBox != NULL)
			this->m_currentTextBox->setPalette(this->m_noFocusPalette.palette());
	setVisible(false);
}



void widgetKeyBoard::createKeyboard(void)
{
	QKeyPushButton	*tmp = NULL;	
	QVBoxLayout	*tmpVLayout = new QVBoxLayout;
	QHBoxLayout	*tmpLayout = new QHBoxLayout;

	if (widgetKeyBoard::m_created == true) // tastiera già creata: esce
		return;
	widgetKeyBoard::m_created = true; // segnala che è stata creata la tastiera
	//
	// stampa tasti numerici:
	tmpLayout->addWidget(createNewKey("\\"));
	for (short i = 49; i <= 57; i++) {
		tmpLayout->addWidget(createNewKey(QChar(i)));
	}
	tmpLayout->addWidget(createNewKey("0"));
	tmpLayout->addWidget(createNewKey("/"));
	tmpLayout->addWidget(createNewKey("?"));
	tmpLayout->addWidget(createNewKey(QString::fromUtf8("ì")));	
	tmp = createNewKey(KEY_BACKSPACE);
	tmp->setMaximumWidth(tmp->maximumWidth() * 3);
	tmp->setMinimumWidth(tmp->minimumWidth() * 3);
	tmpLayout->addWidget(tmp);
	tmpLayout->insertStretch(13, 1);
	tmpVLayout->insertLayout(0, tmpLayout);
	//
	// Stampa linea della "Q":
	tmpLayout = new QHBoxLayout;	
	QVBoxLayout *layoutReturn = new QVBoxLayout;
	tmp = createNewKey(KEY_TAB);
	tmp->setMaximumWidth(tmp->maximumWidth() * 2 - 5);
	tmp->setMinimumWidth(tmp->minimumWidth() * 2 - 5);
	tmpLayout->addWidget(tmp);
	tmpLayout->addWidget(createNewKey("Q"));
	tmpLayout->addWidget(createNewKey("W"));
	tmpLayout->addWidget(createNewKey("E"));
	tmpLayout->addWidget(createNewKey("R"));
	tmpLayout->addWidget(createNewKey("T"));
	tmpLayout->addWidget(createNewKey("Y"));
	tmpLayout->addWidget(createNewKey("U"));
	tmpLayout->addWidget(createNewKey("I"));
	tmpLayout->addWidget(createNewKey("O"));
	tmpLayout->addWidget(createNewKey("P"));
	tmpLayout->addWidget(createNewKey("+"));
	tmpLayout->addWidget(createNewKey("*"));
	tmpLayout->addWidget(createNewKey("-"));
	tmpLayout->insertStretch(-1, 1);
	layoutReturn->insertLayout(0, tmpLayout, 1); // inserisce la riga della "Q"
	//
	// Stampa linea della "A":
	tmpLayout = new QHBoxLayout;	
	tmp = createNewKey(KEY_CAPS);
	tmp->setMaximumWidth(tmp->maximumWidth() * 2 + 5);
	tmp->setMinimumWidth(tmp->minimumWidth() * 2 + 5);
	tmp->setStyleSheet(QString(DEFAULT_STYLE_BUTTON) + QString(CHANGED_BACKGROUND_BUTTON)); // segnalato come attivo
	tmpLayout->addWidget(tmp);
	tmpLayout->addWidget(createNewKey("A"));
	tmpLayout->addWidget(createNewKey("S"));
	tmpLayout->addWidget(createNewKey("D"));
	tmpLayout->addWidget(createNewKey("F"));
	tmpLayout->addWidget(createNewKey("G"));
	tmpLayout->addWidget(createNewKey("H"));
	tmpLayout->addWidget(createNewKey("J"));
	tmpLayout->addWidget(createNewKey("K"));
	tmpLayout->addWidget(createNewKey("L"));
	tmpLayout->addWidget(createNewKey(QString::fromUtf8("ò")));
	tmpLayout->addWidget(createNewKey(QString::fromUtf8("à")));
	tmpLayout->addWidget(createNewKey(QString::fromUtf8("ù")));
	tmpLayout->addWidget(createNewKey("@"));
	tmpLayout->insertStretch(-1, 1);
	layoutReturn->setSpacing(5);
	layoutReturn->insertLayout(1, tmpLayout, 1); // inserisce la riga della "A"
	//
	// inserisce il vertical layout all'interno di un horizontal:	
	tmpLayout = new QHBoxLayout;
	tmpLayout->insertLayout(0, layoutReturn, 1);
	//
	// inserisce anche il tasto invio:
	tmp = createNewKey(KEY_RETURN);
	tmp->setMaximumWidth(tmp->maximumWidth() * 2);
	tmp->setMinimumWidth(tmp->minimumWidth() * 2);
	tmp->setMinimumHeight(tmp->minimumHeight() * 2);
	tmp->setMaximumHeight(tmp->maximumHeight() * 2);
	tmpLayout->addWidget(tmp);
	//
	// inserisce l'horizontal all'interno del layout verticale principale:
	tmpVLayout->insertLayout(1, tmpLayout);
	//	
	// Stampa linea della "Z":
	tmpLayout = new QHBoxLayout;
	tmp = createNewKey(KEY_SHIFT);
	tmp->setMaximumWidth(tmp->maximumWidth() * 2);
	tmp->setMinimumWidth(tmp->minimumWidth() * 2);
	tmpLayout->addWidget(tmp);
	tmpLayout->addWidget(createNewKey("_"));
	tmpLayout->addWidget(createNewKey("Z"));
	tmpLayout->addWidget(createNewKey("X"));
	tmpLayout->addWidget(createNewKey("C"));
	tmpLayout->addWidget(createNewKey("V"));
	tmpLayout->addWidget(createNewKey("B"));
	tmpLayout->addWidget(createNewKey("N"));
	tmpLayout->addWidget(createNewKey("M"));
	tmpLayout->addWidget(createNewKey(","));
	tmpLayout->addWidget(createNewKey(";"));
	tmpLayout->addWidget(createNewKey(":"));
	tmpLayout->addWidget(createNewKey("."));
	tmp = createNewKey(KEY_SHIFT);
	tmp->setMaximumWidth(tmp->maximumWidth() * 3 + 5);
	tmp->setMinimumWidth(tmp->minimumWidth() * 3 + 5);
	tmpLayout->addWidget(tmp);
	tmpVLayout->insertLayout(2, tmpLayout);
	//	
	// Stampa linea dello SPACE:
	tmpLayout = new QHBoxLayout;
	tmp = createNewKey(KEY_CTRL);
	tmp->setMaximumWidth(tmp->maximumWidth() * 2);
	tmp->setMinimumWidth(tmp->minimumWidth() * 2);
	tmpLayout->addWidget(tmp);
	tmp = createNewKey(KEY_ALT);
	tmp->setMaximumWidth(tmp->maximumWidth() * 2);
	tmp->setMinimumWidth(tmp->minimumWidth() * 2);
	tmpLayout->addWidget(tmp);
	tmp = createNewKey(" ");
	tmp->setMaximumWidth(tmp->maximumWidth() * 10);
	tmp->setMinimumWidth(tmp->minimumWidth() * 10);
	tmpLayout->addWidget(tmp);
	tmp = createNewKey(KEY_ALT_GR);
	tmp->setMaximumWidth(tmp->maximumWidth() * 2);
	tmp->setMinimumWidth(tmp->minimumWidth() * 2);
	tmpLayout->addWidget(tmp);
	tmp = createNewKey(KEY_CTRL);
	tmp->setMaximumWidth(tmp->maximumWidth() * 2);
	tmp->setMinimumWidth(tmp->minimumWidth() * 2);
	tmpLayout->addWidget(tmp);
	tmpVLayout->insertLayout(3, tmpLayout);
	//
	// aggangia il layout a tutto il form:
	this->setLayout(tmpVLayout);
}
