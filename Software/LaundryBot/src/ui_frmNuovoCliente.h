/********************************************************************************
** Form generated from reading ui file 'frmNuovoCliente.ui'
**
** Created: Wed 21. May 22:31:56 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_FRMNUOVOCLIENTE_H
#define UI_FRMNUOVOCLIENTE_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QFrame>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QSpacerItem>
#include <QVBoxLayout>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmNuovoCliente
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout1;
    QVBoxLayout *vboxLayout3;
    QLabel *lblCognome;
    QLineEdit *txtCognome;
    QSpacerItem *spacerItem;
    QVBoxLayout *vboxLayout4;
    QLabel *lblNome;
    QLineEdit *txtNome;
    QSpacerItem *spacerItem1;
    QVBoxLayout *vboxLayout5;
    QLabel *lblIndirizzo;
    QLineEdit *txtIndirizzo;
    QHBoxLayout *hboxLayout2;
    QVBoxLayout *vboxLayout6;
    QSpacerItem *spacerItem2;
    QLabel *lblCodiceFiscale;
    QLineEdit *txtCodiceFiscaleIva;
    QSpacerItem *spacerItem3;
    QVBoxLayout *vboxLayout7;
    QSpacerItem *spacerItem4;
    QLabel *lblEmail;
    QLineEdit *txtEmail;
    QHBoxLayout *hboxLayout3;
    QVBoxLayout *vboxLayout8;
    QSpacerItem *spacerItem5;
    QLabel *lblCellulare;
    QLineEdit *txtCellulare;
    QSpacerItem *spacerItem6;
    QVBoxLayout *vboxLayout9;
    QSpacerItem *spacerItem7;
    QLabel *lblTelefono;
    QLineEdit *txtTelefono;
    QSpacerItem *spacerItem8;
    QSpacerItem *spacerItem9;
    QHBoxLayout *hboxLayout4;
    QLabel *label;
    QSpacerItem *spacerItem10;
    QVBoxLayout *vboxLayout10;
    QPushButton *cmdMemorizzaNuovoCliente;
    QLabel *lblAnagraficaNuovoCliente_3;

    void setupUi(QWidget *frmNuovoCliente)
    {
    if (frmNuovoCliente->objectName().isEmpty())
        frmNuovoCliente->setObjectName(QString::fromUtf8("frmNuovoCliente"));
    frmNuovoCliente->resize(600, 548);
    frmNuovoCliente->setMinimumSize(QSize(400, 0));
    frmNuovoCliente->setContextMenuPolicy(Qt::NoContextMenu);
    const QIcon icon = QIcon(QString::fromUtf8(":/NuovoUtente/Xiria 1.1.2/Xiria 1.1.2/128x128/apps/personal.png"));
    frmNuovoCliente->setWindowIcon(icon);
    vboxLayout = new QVBoxLayout(frmNuovoCliente);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    frame = new QFrame(frmNuovoCliente);
    frame->setObjectName(QString::fromUtf8("frame"));
    frame->setFrameShape(QFrame::StyledPanel);
    frame->setFrameShadow(QFrame::Raised);
    hboxLayout = new QHBoxLayout(frame);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    vboxLayout1 = new QVBoxLayout();
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    vboxLayout2 = new QVBoxLayout();
    vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    vboxLayout3 = new QVBoxLayout();
    vboxLayout3->setSpacing(0);
    vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
    lblCognome = new QLabel(frame);
    lblCognome->setObjectName(QString::fromUtf8("lblCognome"));
    QFont font;
    font.setFamily(QString::fromUtf8("Arial"));
    font.setPointSize(10);
    font.setBold(true);
    font.setWeight(75);
    lblCognome->setFont(font);

    vboxLayout3->addWidget(lblCognome);

    txtCognome = new QLineEdit(frame);
    txtCognome->setObjectName(QString::fromUtf8("txtCognome"));
    txtCognome->setAcceptDrops(false);
    txtCognome->setMaxLength(45);
    txtCognome->setFrame(true);

    vboxLayout3->addWidget(txtCognome);


    hboxLayout1->addLayout(vboxLayout3);

    spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

    hboxLayout1->addItem(spacerItem);

    vboxLayout4 = new QVBoxLayout();
    vboxLayout4->setSpacing(0);
    vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
    lblNome = new QLabel(frame);
    lblNome->setObjectName(QString::fromUtf8("lblNome"));
    lblNome->setFont(font);

    vboxLayout4->addWidget(lblNome);

    txtNome = new QLineEdit(frame);
    txtNome->setObjectName(QString::fromUtf8("txtNome"));
    txtNome->setAcceptDrops(false);
    txtNome->setMaxLength(45);
    txtNome->setFrame(true);

    vboxLayout4->addWidget(txtNome);


    hboxLayout1->addLayout(vboxLayout4);


    vboxLayout2->addLayout(hboxLayout1);

    spacerItem1 = new QSpacerItem(556, 16, QSizePolicy::Minimum, QSizePolicy::Minimum);

    vboxLayout2->addItem(spacerItem1);

    vboxLayout5 = new QVBoxLayout();
    vboxLayout5->setSpacing(0);
    vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
    lblIndirizzo = new QLabel(frame);
    lblIndirizzo->setObjectName(QString::fromUtf8("lblIndirizzo"));
    lblIndirizzo->setFont(font);

    vboxLayout5->addWidget(lblIndirizzo);

    txtIndirizzo = new QLineEdit(frame);
    txtIndirizzo->setObjectName(QString::fromUtf8("txtIndirizzo"));

    vboxLayout5->addWidget(txtIndirizzo);

    hboxLayout2 = new QHBoxLayout();
    hboxLayout2->setSpacing(0);
    hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
    vboxLayout6 = new QVBoxLayout();
    vboxLayout6->setSpacing(0);
    vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
    spacerItem2 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Minimum);

    vboxLayout6->addItem(spacerItem2);

    lblCodiceFiscale = new QLabel(frame);
    lblCodiceFiscale->setObjectName(QString::fromUtf8("lblCodiceFiscale"));
    lblCodiceFiscale->setFont(font);

    vboxLayout6->addWidget(lblCodiceFiscale);

    txtCodiceFiscaleIva = new QLineEdit(frame);
    txtCodiceFiscaleIva->setObjectName(QString::fromUtf8("txtCodiceFiscaleIva"));
    txtCodiceFiscaleIva->setMinimumSize(QSize(0, 0));
    txtCodiceFiscaleIva->setAcceptDrops(false);
    txtCodiceFiscaleIva->setMaxLength(30);
    txtCodiceFiscaleIva->setFrame(true);

    vboxLayout6->addWidget(txtCodiceFiscaleIva);


    hboxLayout2->addLayout(vboxLayout6);

    spacerItem3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

    hboxLayout2->addItem(spacerItem3);

    vboxLayout7 = new QVBoxLayout();
    vboxLayout7->setSpacing(0);
    vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
    spacerItem4 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Minimum);

    vboxLayout7->addItem(spacerItem4);

    lblEmail = new QLabel(frame);
    lblEmail->setObjectName(QString::fromUtf8("lblEmail"));
    lblEmail->setFont(font);

    vboxLayout7->addWidget(lblEmail);

    txtEmail = new QLineEdit(frame);
    txtEmail->setObjectName(QString::fromUtf8("txtEmail"));
    txtEmail->setAcceptDrops(false);
    txtEmail->setMaxLength(40);
    txtEmail->setFrame(true);

    vboxLayout7->addWidget(txtEmail);


    hboxLayout2->addLayout(vboxLayout7);


    vboxLayout5->addLayout(hboxLayout2);

    hboxLayout3 = new QHBoxLayout();
    hboxLayout3->setSpacing(0);
    hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
    vboxLayout8 = new QVBoxLayout();
    vboxLayout8->setSpacing(0);
    vboxLayout8->setObjectName(QString::fromUtf8("vboxLayout8"));
    spacerItem5 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Minimum);

    vboxLayout8->addItem(spacerItem5);

    lblCellulare = new QLabel(frame);
    lblCellulare->setObjectName(QString::fromUtf8("lblCellulare"));
    lblCellulare->setFont(font);

    vboxLayout8->addWidget(lblCellulare);

    txtCellulare = new QLineEdit(frame);
    txtCellulare->setObjectName(QString::fromUtf8("txtCellulare"));
    txtCellulare->setAcceptDrops(false);
    txtCellulare->setMaxLength(30);
    txtCellulare->setFrame(true);

    vboxLayout8->addWidget(txtCellulare);


    hboxLayout3->addLayout(vboxLayout8);

    spacerItem6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

    hboxLayout3->addItem(spacerItem6);

    vboxLayout9 = new QVBoxLayout();
    vboxLayout9->setSpacing(0);
    vboxLayout9->setObjectName(QString::fromUtf8("vboxLayout9"));
    spacerItem7 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Minimum);

    vboxLayout9->addItem(spacerItem7);

    lblTelefono = new QLabel(frame);
    lblTelefono->setObjectName(QString::fromUtf8("lblTelefono"));
    lblTelefono->setFont(font);

    vboxLayout9->addWidget(lblTelefono);

    txtTelefono = new QLineEdit(frame);
    txtTelefono->setObjectName(QString::fromUtf8("txtTelefono"));
    txtTelefono->setAcceptDrops(false);
    txtTelefono->setMaxLength(30);
    txtTelefono->setFrame(true);

    vboxLayout9->addWidget(txtTelefono);


    hboxLayout3->addLayout(vboxLayout9);


    vboxLayout5->addLayout(hboxLayout3);

    spacerItem8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout5->addItem(spacerItem8);


    vboxLayout2->addLayout(vboxLayout5);


    vboxLayout1->addLayout(vboxLayout2);

    spacerItem9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout1->addItem(spacerItem9);

    hboxLayout4 = new QHBoxLayout();
    hboxLayout4->setSpacing(6);
    hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
    label = new QLabel(frame);
    label->setObjectName(QString::fromUtf8("label"));
    label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

    hboxLayout4->addWidget(label);

    spacerItem10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout4->addItem(spacerItem10);

    vboxLayout10 = new QVBoxLayout();
    vboxLayout10->setObjectName(QString::fromUtf8("vboxLayout10"));
    cmdMemorizzaNuovoCliente = new QPushButton(frame);
    cmdMemorizzaNuovoCliente->setObjectName(QString::fromUtf8("cmdMemorizzaNuovoCliente"));
    cmdMemorizzaNuovoCliente->setCursor(QCursor(Qt::PointingHandCursor));
    cmdMemorizzaNuovoCliente->setFocusPolicy(Qt::NoFocus);
    cmdMemorizzaNuovoCliente->setLayoutDirection(Qt::LeftToRight);
    const QIcon icon1 = QIcon(QString::fromUtf8(":/Inserisci/Xiria 1.1.2/Xiria 1.1.2/128x128/devices/3floppy_unmount.png"));
    cmdMemorizzaNuovoCliente->setIcon(icon1);
    cmdMemorizzaNuovoCliente->setIconSize(QSize(160, 64));
    cmdMemorizzaNuovoCliente->setFlat(true);

    vboxLayout10->addWidget(cmdMemorizzaNuovoCliente);

    lblAnagraficaNuovoCliente_3 = new QLabel(frame);
    lblAnagraficaNuovoCliente_3->setObjectName(QString::fromUtf8("lblAnagraficaNuovoCliente_3"));
    QFont font1;
    font1.setPointSize(9);
    font1.setBold(true);
    font1.setItalic(true);
    font1.setWeight(75);
    lblAnagraficaNuovoCliente_3->setFont(font1);
    lblAnagraficaNuovoCliente_3->setTextFormat(Qt::PlainText);
    lblAnagraficaNuovoCliente_3->setScaledContents(false);
    lblAnagraficaNuovoCliente_3->setAlignment(Qt::AlignCenter);
    lblAnagraficaNuovoCliente_3->setTextInteractionFlags(Qt::NoTextInteraction);

    vboxLayout10->addWidget(lblAnagraficaNuovoCliente_3);


    hboxLayout4->addLayout(vboxLayout10);


    vboxLayout1->addLayout(hboxLayout4);


    hboxLayout->addLayout(vboxLayout1);


    vboxLayout->addWidget(frame);

    QWidget::setTabOrder(txtCognome, txtNome);
    QWidget::setTabOrder(txtNome, txtIndirizzo);
    QWidget::setTabOrder(txtIndirizzo, txtCodiceFiscaleIva);
    QWidget::setTabOrder(txtCodiceFiscaleIva, txtEmail);
    QWidget::setTabOrder(txtEmail, txtCellulare);
    QWidget::setTabOrder(txtCellulare, txtTelefono);

    retranslateUi(frmNuovoCliente);

    QMetaObject::connectSlotsByName(frmNuovoCliente);
    } // setupUi

    void retranslateUi(QWidget *frmNuovoCliente)
    {
    frmNuovoCliente->setWindowTitle(QGuiApplication::translate("frmNuovoCliente", "Nuovo Cliente", 0));
    lblCognome->setText(QApplication::translate("frmNuovoCliente", "Cognome (*):", 0));
    lblNome->setText(QApplication::translate("frmNuovoCliente", "Nome (*):", 0));
    lblIndirizzo->setText(QApplication::translate("frmNuovoCliente", "Indirizzo di residenza:", 0));
    lblCodiceFiscale->setText(QApplication::translate("frmNuovoCliente", "Codice fiscale/Parita iva:", 0));
    lblEmail->setText(QApplication::translate("frmNuovoCliente", "Indirizzo di Posta Elettronica:", 0));
    lblCellulare->setText(QApplication::translate("frmNuovoCliente", "Telefono mobile:", 0));
    lblTelefono->setText(QApplication::translate("frmNuovoCliente", "Telefono Abitazione (*):", 0));
    label->setText(QApplication::translate("frmNuovoCliente", "(*) Campi obbligatori", 0));

#ifndef QT_NO_TOOLTIP
    cmdMemorizzaNuovoCliente->setToolTip(QApplication::translate("frmNuovoCliente", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Inserisci in archivio il nuovo cliente</p></body></html>", 0));
#endif // QT_NO_TOOLTIP

    cmdMemorizzaNuovoCliente->setText(QString());
    lblAnagraficaNuovoCliente_3->setText(QApplication::translate("frmNuovoCliente", "Memorizza Nuovo Cliente", 0));
    Q_UNUSED(frmNuovoCliente);
    } // retranslateUi

};

namespace Ui {
    class frmNuovoCliente: public Ui_frmNuovoCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMNUOVOCLIENTE_H
