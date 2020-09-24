/********************************************************************************
** Form generated from reading ui file 'frmDBSettings.ui'
**
** Created: Wed 21. May 22:31:56 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_FRMDBSETTINGS_H
#define UI_FRMDBSETTINGS_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QSpacerItem>
#include <QVBoxLayout>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmDBSettings
{
public:
    QVBoxLayout *vboxLayout;
    QSpacerItem *spacerItem;
    QVBoxLayout *vboxLayout1;
    QGroupBox *groupBoxDB;
    QVBoxLayout *vboxLayout2;
    QVBoxLayout *vboxLayout3;
    QVBoxLayout *vboxLayout4;
    QLabel *lblNomeServer;
    QLineEdit *txtServerName;
    QSpacerItem *spacerItem1;
    QVBoxLayout *vboxLayout5;
    QLabel *lblNomeDatabase;
    QLineEdit *txtNomeDatabase;
    QSpacerItem *spacerItem2;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout6;
    QLabel *lblUsername;
    QLineEdit *txtUsername;
    QSpacerItem *spacerItem3;
    QSpacerItem *spacerItem4;
    QVBoxLayout *vboxLayout7;
    QLabel *lblPassword;
    QLineEdit *txtPassword;
    QSpacerItem *spacerItem5;
    QSpacerItem *spacerItem6;
    QSpacerItem *spacerItem7;
    QHBoxLayout *hboxLayout1;
    QPushButton *cmdRiconnectDB;
    QSpacerItem *spacerItem8;
    QPushButton *cmdReload;
    QPushButton *cmdUpdateSettings;

    void setupUi(QWidget *frmDBSettings)
    {
    if (frmDBSettings->objectName().isEmpty())
        frmDBSettings->setObjectName(QString::fromUtf8("frmDBSettings"));
    frmDBSettings->resize(469, 348);
    const QIcon icon = QIcon(QString::fromUtf8(":/DB/Xiria 1.1.2/Xiria 1.1.2/32x32/actions/db.png"));
    frmDBSettings->setWindowIcon(icon);
    vboxLayout = new QVBoxLayout(frmDBSettings);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    spacerItem = new QSpacerItem(451, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

    vboxLayout->addItem(spacerItem);

    vboxLayout1 = new QVBoxLayout();
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    groupBoxDB = new QGroupBox(frmDBSettings);
    groupBoxDB->setObjectName(QString::fromUtf8("groupBoxDB"));
    QFont font;
    font.setBold(true);
    font.setItalic(true);
    font.setWeight(75);
    groupBoxDB->setFont(font);
    groupBoxDB->setFlat(false);
    vboxLayout2 = new QVBoxLayout(groupBoxDB);
    vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
    vboxLayout3 = new QVBoxLayout();
    vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
    vboxLayout4 = new QVBoxLayout();
    vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
    lblNomeServer = new QLabel(groupBoxDB);
    lblNomeServer->setObjectName(QString::fromUtf8("lblNomeServer"));
    QFont font1;
    font1.setBold(true);
    font1.setItalic(false);
    font1.setWeight(75);
    lblNomeServer->setFont(font1);

    vboxLayout4->addWidget(lblNomeServer);

    txtServerName = new QLineEdit(groupBoxDB);
    txtServerName->setObjectName(QString::fromUtf8("txtServerName"));
    QFont font2;
    font2.setBold(false);
    font2.setItalic(false);
    font2.setWeight(50);
    txtServerName->setFont(font2);

    vboxLayout4->addWidget(txtServerName);


    vboxLayout3->addLayout(vboxLayout4);

    spacerItem1 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

    vboxLayout3->addItem(spacerItem1);

    vboxLayout5 = new QVBoxLayout();
    vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
    lblNomeDatabase = new QLabel(groupBoxDB);
    lblNomeDatabase->setObjectName(QString::fromUtf8("lblNomeDatabase"));
    lblNomeDatabase->setFont(font1);

    vboxLayout5->addWidget(lblNomeDatabase);

    txtNomeDatabase = new QLineEdit(groupBoxDB);
    txtNomeDatabase->setObjectName(QString::fromUtf8("txtNomeDatabase"));
    txtNomeDatabase->setFont(font2);

    vboxLayout5->addWidget(txtNomeDatabase);


    vboxLayout3->addLayout(vboxLayout5);

    spacerItem2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Minimum);

    vboxLayout3->addItem(spacerItem2);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    vboxLayout6 = new QVBoxLayout();
    vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
    lblUsername = new QLabel(groupBoxDB);
    lblUsername->setObjectName(QString::fromUtf8("lblUsername"));
    lblUsername->setFont(font1);

    vboxLayout6->addWidget(lblUsername);

    txtUsername = new QLineEdit(groupBoxDB);
    txtUsername->setObjectName(QString::fromUtf8("txtUsername"));
    txtUsername->setFont(font2);

    vboxLayout6->addWidget(txtUsername);

    spacerItem3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Minimum);

    vboxLayout6->addItem(spacerItem3);


    hboxLayout->addLayout(vboxLayout6);

    spacerItem4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem4);

    vboxLayout7 = new QVBoxLayout();
    vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
    lblPassword = new QLabel(groupBoxDB);
    lblPassword->setObjectName(QString::fromUtf8("lblPassword"));
    lblPassword->setFont(font1);

    vboxLayout7->addWidget(lblPassword);

    txtPassword = new QLineEdit(groupBoxDB);
    txtPassword->setObjectName(QString::fromUtf8("txtPassword"));
    txtPassword->setFont(font2);
    txtPassword->setEchoMode(QLineEdit::Password);

    vboxLayout7->addWidget(txtPassword);

    spacerItem5 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Minimum);

    vboxLayout7->addItem(spacerItem5);


    hboxLayout->addLayout(vboxLayout7);


    vboxLayout3->addLayout(hboxLayout);


    vboxLayout2->addLayout(vboxLayout3);

    spacerItem6 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Minimum);

    vboxLayout2->addItem(spacerItem6);


    vboxLayout1->addWidget(groupBoxDB);

    spacerItem7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout1->addItem(spacerItem7);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    cmdRiconnectDB = new QPushButton(frmDBSettings);
    cmdRiconnectDB->setObjectName(QString::fromUtf8("cmdRiconnectDB"));
    const QIcon icon1 = QIcon(QString::fromUtf8(":/Riconnect/Xiria 1.1.2/Xiria 1.1.2/32x32/actions/db_comit.png"));
    cmdRiconnectDB->setIcon(icon1);
    cmdRiconnectDB->setIconSize(QSize(32, 32));

    hboxLayout1->addWidget(cmdRiconnectDB);

    spacerItem8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout1->addItem(spacerItem8);

    cmdReload = new QPushButton(frmDBSettings);
    cmdReload->setObjectName(QString::fromUtf8("cmdReload"));
    const QIcon icon2 = QIcon(QString::fromUtf8(":/Reload/Xiria 1.1.2/Xiria 1.1.2/32x32/actions/reload.png"));
    cmdReload->setIcon(icon2);
    cmdReload->setIconSize(QSize(32, 32));

    hboxLayout1->addWidget(cmdReload);

    cmdUpdateSettings = new QPushButton(frmDBSettings);
    cmdUpdateSettings->setObjectName(QString::fromUtf8("cmdUpdateSettings"));
    const QIcon icon3 = QIcon(QString::fromUtf8(":/OK/Xiria 1.1.2/Xiria 1.1.2/32x32/actions/filesaveas.png"));
    cmdUpdateSettings->setIcon(icon3);
    cmdUpdateSettings->setIconSize(QSize(32, 32));

    hboxLayout1->addWidget(cmdUpdateSettings);


    vboxLayout1->addLayout(hboxLayout1);


    vboxLayout->addLayout(vboxLayout1);

    QWidget::setTabOrder(txtServerName, txtNomeDatabase);
    QWidget::setTabOrder(txtNomeDatabase, txtUsername);
    QWidget::setTabOrder(txtUsername, txtPassword);
    QWidget::setTabOrder(txtPassword, cmdReload);
    QWidget::setTabOrder(cmdReload, cmdUpdateSettings);

    retranslateUi(frmDBSettings);

    QMetaObject::connectSlotsByName(frmDBSettings);
    } // setupUi

    void retranslateUi(QWidget *frmDBSettings)
    {
    frmDBSettings->setWindowTitle(QGuiApplication::translate("frmDBSettings", "Configurazione accesso database"));
    groupBoxDB->setTitle(QApplication::translate("frmDBSettings", "Dati accesso database", 0));
    lblNomeServer->setText(QApplication::translate("frmDBSettings", "Indirizzo IP o nome del server:", 0));
    lblNomeDatabase->setText(QApplication::translate("frmDBSettings", "Nome del database (schema):", 0));
    lblUsername->setText(QApplication::translate("frmDBSettings", "Username:", 0));
    lblPassword->setText(QApplication::translate("frmDBSettings", "Password:", 0));

#ifndef QT_NO_TOOLTIP
    cmdRiconnectDB->setToolTip(QApplication::translate("frmDBSettings", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Riattiva la connessione</p></body></html>", 0));
#endif // QT_NO_TOOLTIP

    cmdRiconnectDB->setText(QApplication::translate("frmDBSettings", "Tenta connessione", 0));

#ifndef QT_NO_TOOLTIP
    cmdReload->setToolTip(QApplication::translate("frmDBSettings", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Ricarica i dati dalla configurazione</p></body></html>", 0));
#endif // QT_NO_TOOLTIP

    cmdReload->setText(QApplication::translate("frmDBSettings", "Ricarica", 0));

#ifndef QT_NO_TOOLTIP
    cmdUpdateSettings->setToolTip(QApplication::translate("frmDBSettings", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Memorizza i nuovi valori</p></body></html>", 0));
#endif // QT_NO_TOOLTIP

    cmdUpdateSettings->setText(QApplication::translate("frmDBSettings", "Conferma", 0));
    Q_UNUSED(frmDBSettings);
    } // retranslateUi

};

namespace Ui {
    class frmDBSettings: public Ui_frmDBSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMDBSETTINGS_H
