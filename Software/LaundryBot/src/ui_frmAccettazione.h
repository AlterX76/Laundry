/********************************************************************************
** Form generated from reading ui file 'frmAccettazione.ui'
**
** Created: Wed 21. May 22:31:55 2008
**      by: Qt User Interface Compiler version 4.4.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_FRMACCETTAZIONE_H
#define UI_FRMACCETTAZIONE_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QFrame>
#include <QHBoxLayout>
#include <QLabel>
#include <QListView>
#include <QPushButton>
#include <QSpacerItem>
#include <QToolBox>
#include <QVBoxLayout>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmAccettazione
{
public:
    QHBoxLayout *hboxLayout;
    QHBoxLayout *hboxLayout1;
    QVBoxLayout *vboxLayout;
    QLabel *lblInfoAccettazione;
    QListView *listViewPezziOrdinati;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *spacerItem1;
    QVBoxLayout *vboxLayout1;
    QWidget *widget;
    QHBoxLayout *hboxLayout4;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSpacerItem *spacerItem2;
    QToolBox *toolTastierino;
    QWidget *templateTastierino;
    QVBoxLayout *vboxLayout2;
    QFrame *frameTastierino;
    QFrame *frameTipoAzione;

    void setupUi(QWidget *frmAccettazione)
    {
    if (frmAccettazione->objectName().isEmpty())
        frmAccettazione->setObjectName(QString::fromUtf8("frmAccettazione"));
    frmAccettazione->resize(814, 623);
    hboxLayout = new QHBoxLayout(frmAccettazione);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    vboxLayout = new QVBoxLayout();
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    lblInfoAccettazione = new QLabel(frmAccettazione);
    lblInfoAccettazione->setObjectName(QString::fromUtf8("lblInfoAccettazione"));

    vboxLayout->addWidget(lblInfoAccettazione);

    listViewPezziOrdinati = new QListView(frmAccettazione);
    listViewPezziOrdinati->setObjectName(QString::fromUtf8("listViewPezziOrdinati"));
    listViewPezziOrdinati->setDragEnabled(true);
    listViewPezziOrdinati->setDragDropMode(QAbstractItemView::NoDragDrop);
    listViewPezziOrdinati->setAlternatingRowColors(true);
    listViewPezziOrdinati->setMovement(QListView::Static);

    vboxLayout->addWidget(listViewPezziOrdinati);

    spacerItem = new QSpacerItem(40, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

    vboxLayout->addItem(spacerItem);

    hboxLayout2 = new QHBoxLayout();
    hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
    pushButton_6 = new QPushButton(frmAccettazione);
    pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

    hboxLayout2->addWidget(pushButton_6);

    pushButton_7 = new QPushButton(frmAccettazione);
    pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

    hboxLayout2->addWidget(pushButton_7);

    pushButton_5 = new QPushButton(frmAccettazione);
    pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

    hboxLayout2->addWidget(pushButton_5);


    vboxLayout->addLayout(hboxLayout2);


    hboxLayout1->addLayout(vboxLayout);

    hboxLayout3 = new QHBoxLayout();
    hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
    spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout3->addItem(spacerItem1);

    vboxLayout1 = new QVBoxLayout();
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    widget = new QWidget(frmAccettazione);
    widget->setObjectName(QString::fromUtf8("widget"));

    vboxLayout1->addWidget(widget);

    hboxLayout4 = new QHBoxLayout();
    hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
    pushButton_4 = new QPushButton(frmAccettazione);
    pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
    pushButton_4->setMaximumSize(QSize(25, 25));

    hboxLayout4->addWidget(pushButton_4);

    pushButton_3 = new QPushButton(frmAccettazione);
    pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
    pushButton_3->setMaximumSize(QSize(25, 25));

    hboxLayout4->addWidget(pushButton_3);

    pushButton_2 = new QPushButton(frmAccettazione);
    pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
    pushButton_2->setMaximumSize(QSize(25, 25));

    hboxLayout4->addWidget(pushButton_2);

    pushButton = new QPushButton(frmAccettazione);
    pushButton->setObjectName(QString::fromUtf8("pushButton"));
    pushButton->setMaximumSize(QSize(25, 25));

    hboxLayout4->addWidget(pushButton);

    spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout4->addItem(spacerItem2);


    vboxLayout1->addLayout(hboxLayout4);

    toolTastierino = new QToolBox(frmAccettazione);
    toolTastierino->setObjectName(QString::fromUtf8("toolTastierino"));
    toolTastierino->setMinimumSize(QSize(350, 16));
    toolTastierino->setMaximumSize(QSize(350, 1200));
    QFont font;
    font.setBold(true);
    font.setItalic(true);
    font.setWeight(75);
    toolTastierino->setFont(font);
    toolTastierino->setContextMenuPolicy(Qt::NoContextMenu);
    toolTastierino->setFrameShape(QFrame::Box);
    toolTastierino->setFrameShadow(QFrame::Raised);
    templateTastierino = new QWidget();
    templateTastierino->setObjectName(QString::fromUtf8("templateTastierino"));
    templateTastierino->setGeometry(QRect(0, 0, 346, 521));
    vboxLayout2 = new QVBoxLayout(templateTastierino);
    vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
    frameTastierino = new QFrame(templateTastierino);
    frameTastierino->setObjectName(QString::fromUtf8("frameTastierino"));
    frameTastierino->setFrameShape(QFrame::Box);
    frameTastierino->setFrameShadow(QFrame::Raised);

    vboxLayout2->addWidget(frameTastierino);

    frameTipoAzione = new QFrame(templateTastierino);
    frameTipoAzione->setObjectName(QString::fromUtf8("frameTipoAzione"));
    frameTipoAzione->setFrameShape(QFrame::Panel);
    frameTipoAzione->setFrameShadow(QFrame::Plain);

    vboxLayout2->addWidget(frameTipoAzione);

    toolTastierino->addItem(templateTastierino, QApplication::translate("frmAccettazione", "Template", 0));

    vboxLayout1->addWidget(toolTastierino);


    hboxLayout3->addLayout(vboxLayout1);


    hboxLayout1->addLayout(hboxLayout3);


    hboxLayout->addLayout(hboxLayout1);


    retranslateUi(frmAccettazione);

    toolTastierino->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(frmAccettazione);
    } // setupUi

    void retranslateUi(QWidget *frmAccettazione)
    {
    frmAccettazione->setWindowTitle(QString());
    lblInfoAccettazione->setText(QApplication::translate("frmAccettazione", "Pezzi che si stanno acquisendo:", 0));
    pushButton_6->setText(QApplication::translate("frmAccettazione", "PushButton", 0));
    pushButton_7->setText(QApplication::translate("frmAccettazione", "PushButton", 0));
    pushButton_5->setText(QApplication::translate("frmAccettazione", "PushButton", 0));
    pushButton_4->setText(QString());
    pushButton_3->setText(QString());
    pushButton_2->setText(QString());
    pushButton->setText(QString());
    toolTastierino->setItemText(toolTastierino->indexOf(templateTastierino), QApplication::translate("frmAccettazione", "Template", 0));
    Q_UNUSED(frmAccettazione);
    } // retranslateUi

};

namespace Ui {
    class frmAccettazione: public Ui_frmAccettazione {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMACCETTAZIONE_H
