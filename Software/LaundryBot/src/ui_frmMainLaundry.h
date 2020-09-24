/********************************************************************************
** Form generated from reading ui file 'frmMainLaundry.ui'
**
** Created: Wed May 21 16:51:04 2008
**      by: Qt User Interface Compiler version 4.3.4
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_FRMMAINLAUNDRY_H
#define UI_FRMMAINLAUNDRY_H

#include <QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QDockWidget>
#include <QFrame>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QMainWindow>
#include <QPushButton>
#include <QSpacerItem>
#include <QStatusBar>
#include <QToolBar>
#include <QToolBox>
#include <QVBoxLayout>
#include <QWidget>

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStatusBar *statusbar;
    QDockWidget *dockControlBox;
    QWidget *dockWidgetContents;
    QVBoxLayout *vboxLayout;
    QFrame *frameControlBox;
    QHBoxLayout *hboxLayout;
    QHBoxLayout *hboxLayout1;
    QVBoxLayout *vboxLayout1;
    QPushButton *cmdGestioneAnagrafica;
    QLabel *lblGestioneAnagrafica;
    QSpacerItem *spacerItem;
    QVBoxLayout *vboxLayout2;
    QPushButton *cmdGestioneTastierino;
    QLabel *lblGestioneTastierino;
    QSpacerItem *spacerItem1;
    QVBoxLayout *vboxLayout3;
    QPushButton *cmdGestioneCommessa;
    QLabel *lblGestioneCommessa;
    QSpacerItem *spacerItem2;
    QFrame *line;
    QVBoxLayout *vboxLayout4;
    QPushButton *cmdNuovaCommessa;
    QLabel *lblAnagrafica_2;
    QSpacerItem *spacerItem3;
    QVBoxLayout *vboxLayout5;
    QPushButton *cmdAttivaBarCode;
    QLabel *lblAnagrafica_3;
    QSpacerItem *spacerItem4;
    QVBoxLayout *vboxLayout6;
    QPushButton *cmdTastieraVirtuale;
    QLabel *lblAnagrafica_4;
    QSpacerItem *spacerItem5;
    QFrame *line_3;
    QVBoxLayout *vboxLayout7;
    QPushButton *cmdReportCommesseCapitaliAperti;
    QLabel *lblAnagrafica_5;
    QSpacerItem *spacerItem6;
    QVBoxLayout *vboxLayout8;
    QPushButton *cmdStoricoCliente;
    QLabel *lblAnagrafica_6;
    QSpacerItem *spacerItem7;
    QSpacerItem *spacerItem8;
    QSpacerItem *spacerItem9;
    QVBoxLayout *vboxLayout9;
    QPushButton *cmdUscitaProgramma;
    QLabel *lblAnagrafica_7;
    QSpacerItem *spacerItem10;
    QDockWidget *dockShortKey;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *vboxLayout10;
    QVBoxLayout *vboxLayout11;
    QToolBox *toolBoxShortKey;
    QWidget *pageAnagrafica;
    QVBoxLayout *vboxLayout12;
    QVBoxLayout *vboxLayout13;
    QVBoxLayout *vboxLayout14;
    QPushButton *cmdNuovoCliente;
    QLabel *lblAnagraficaNuovoCliente;
    QVBoxLayout *vboxLayout15;
    QPushButton *cmdRicercaCliente;
    QLabel *lblAnagraficaNuovoCliente_2;
    QVBoxLayout *vboxLayout16;
    QPushButton *cmdRicercaCliente_2;
    QLabel *lblAnagraficaNuovoCliente_7;
    QSpacerItem *spacerItem11;
    QWidget *pageCommessa;
    QVBoxLayout *vboxLayout17;
    QVBoxLayout *vboxLayout18;
    QVBoxLayout *vboxLayout19;
    QPushButton *cmdTrash;
    QLabel *lblAnagraficaNuovoCliente_6;
    QVBoxLayout *vboxLayout20;
    QPushButton *cmdTrash_2;
    QLabel *lblAnagraficaNuovoCliente_8;
    QSpacerItem *spacerItem12;
    QWidget *pageGeneralSettings;
    QVBoxLayout *vboxLayout21;
    QVBoxLayout *vboxLayout22;
    QPushButton *cmdDBSettings;
    QLabel *lblDBSettings;
    QVBoxLayout *vboxLayout23;
    QPushButton *cmdSoftwareSettings_2;
    QLabel *lblSoftwareSettings_2;
    QSpacerItem *spacerItem13;
    QLabel *lblInfoSettings;
    QWidget *pageUserFilter;
    QVBoxLayout *vboxLayout24;
    QFrame *frameUserFilter;
    QHBoxLayout *hboxLayout2;
    QVBoxLayout *vboxLayout25;
    QVBoxLayout *vboxLayout26;
    QLabel *lblNameFilter;
    QLineEdit *txtFiltroNomeCliente;
    QVBoxLayout *vboxLayout27;
    QLabel *lblSurnameFilter;
    QLineEdit *txtFiltroCognomeCliente;
    QVBoxLayout *vboxLayout28;
    QLabel *lblCodiceIvaFilter;
    QLineEdit *txtFiltroCodiceFiscaleIvaCliente;
    QSpacerItem *spacerItem14;
    QHBoxLayout *hboxLayout3;
    QPushButton *cmdStartUserSearch;
    QSpacerItem *spacerItem15;
    QPushButton *cmdReturnAnagrafica;
    QSpacerItem *spacerItem16;
    QSpacerItem *spacerItem17;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
    if (MainWindow->objectName().isEmpty())
        MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    MainWindow->resize(1014, 735);
    MainWindow->setWindowIcon(QIcon(QString::fromUtf8(":/MainWindowIcon/Xiria 1.1.2/Xiria 1.1.2/32x32/actions/agt_home.png")));
    MainWindow->setUnifiedTitleAndToolBarOnMac(false);
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    MainWindow->setCentralWidget(centralwidget);
    statusbar = new QStatusBar(MainWindow);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    MainWindow->setStatusBar(statusbar);
    dockControlBox = new QDockWidget(MainWindow);
    dockControlBox->setObjectName(QString::fromUtf8("dockControlBox"));
    QFont font;
    font.setPointSize(8);
    font.setBold(false);
    font.setItalic(true);
    font.setWeight(50);
    dockControlBox->setFont(font);
    dockControlBox->setAutoFillBackground(true);
    dockControlBox->setFeatures(QDockWidget::DockWidgetMovable);
    dockControlBox->setAllowedAreas(Qt::BottomDockWidgetArea);
    dockWidgetContents = new QWidget(dockControlBox);
    dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
    vboxLayout = new QVBoxLayout(dockWidgetContents);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    vboxLayout->setContentsMargins(0, 0, 0, 0);
    frameControlBox = new QFrame(dockWidgetContents);
    frameControlBox->setObjectName(QString::fromUtf8("frameControlBox"));
    frameControlBox->setFrameShape(QFrame::StyledPanel);
    frameControlBox->setFrameShadow(QFrame::Raised);
    hboxLayout = new QHBoxLayout(frameControlBox);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setSpacing(10);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    vboxLayout1 = new QVBoxLayout();
    vboxLayout1->setSpacing(0);
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    cmdGestioneAnagrafica = new QPushButton(frameControlBox);
    cmdGestioneAnagrafica->setObjectName(QString::fromUtf8("cmdGestioneAnagrafica"));
    cmdGestioneAnagrafica->setCursor(QCursor(Qt::PointingHandCursor));
    cmdGestioneAnagrafica->setFocusPolicy(Qt::NoFocus);
    cmdGestioneAnagrafica->setLayoutDirection(Qt::LeftToRight);
    cmdGestioneAnagrafica->setIcon(QIcon(QString::fromUtf8(":/Anagrafica/Xiria 1.1.2/Xiria 1.1.2/128x128/apps/packagesettings.png")));
    cmdGestioneAnagrafica->setIconSize(QSize(64, 64));
    cmdGestioneAnagrafica->setFlat(true);

    vboxLayout1->addWidget(cmdGestioneAnagrafica);

    lblGestioneAnagrafica = new QLabel(frameControlBox);
    lblGestioneAnagrafica->setObjectName(QString::fromUtf8("lblGestioneAnagrafica"));
    QFont font1;
    font1.setPointSize(9);
    font1.setBold(true);
    font1.setItalic(true);
    font1.setWeight(75);
    lblGestioneAnagrafica->setFont(font1);
    lblGestioneAnagrafica->setTextFormat(Qt::PlainText);
    lblGestioneAnagrafica->setTextInteractionFlags(Qt::NoTextInteraction);

    vboxLayout1->addWidget(lblGestioneAnagrafica);

    spacerItem = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout1->addItem(spacerItem);


    hboxLayout1->addLayout(vboxLayout1);

    vboxLayout2 = new QVBoxLayout();
    vboxLayout2->setSpacing(0);
    vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
    cmdGestioneTastierino = new QPushButton(frameControlBox);
    cmdGestioneTastierino->setObjectName(QString::fromUtf8("cmdGestioneTastierino"));
    cmdGestioneTastierino->setCursor(QCursor(Qt::PointingHandCursor));
    cmdGestioneTastierino->setFocusPolicy(Qt::NoFocus);
    cmdGestioneTastierino->setLayoutDirection(Qt::LeftToRight);
    cmdGestioneTastierino->setIcon(QIcon(QString::fromUtf8(":/Tastierino/Xiria 1.1.2/Xiria 1.1.2/128x128/apps/scribus.png")));
    cmdGestioneTastierino->setIconSize(QSize(64, 64));
    cmdGestioneTastierino->setFlat(true);

    vboxLayout2->addWidget(cmdGestioneTastierino);

    lblGestioneTastierino = new QLabel(frameControlBox);
    lblGestioneTastierino->setObjectName(QString::fromUtf8("lblGestioneTastierino"));
    lblGestioneTastierino->setFont(font1);
    lblGestioneTastierino->setTextFormat(Qt::PlainText);
    lblGestioneTastierino->setTextInteractionFlags(Qt::NoTextInteraction);

    vboxLayout2->addWidget(lblGestioneTastierino);

    spacerItem1 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout2->addItem(spacerItem1);


    hboxLayout1->addLayout(vboxLayout2);

    vboxLayout3 = new QVBoxLayout();
    vboxLayout3->setSpacing(0);
    vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
    cmdGestioneCommessa = new QPushButton(frameControlBox);
    cmdGestioneCommessa->setObjectName(QString::fromUtf8("cmdGestioneCommessa"));
    cmdGestioneCommessa->setCursor(QCursor(Qt::PointingHandCursor));
    cmdGestioneCommessa->setFocusPolicy(Qt::NoFocus);
    cmdGestioneCommessa->setLayoutDirection(Qt::LeftToRight);
    cmdGestioneCommessa->setIcon(QIcon(QString::fromUtf8(":/GestioneCommessa/Xiria 1.1.2/Xiria 1.1.2/128x128/apps/krdc.png")));
    cmdGestioneCommessa->setIconSize(QSize(64, 64));
    cmdGestioneCommessa->setFlat(true);

    vboxLayout3->addWidget(cmdGestioneCommessa);

    lblGestioneCommessa = new QLabel(frameControlBox);
    lblGestioneCommessa->setObjectName(QString::fromUtf8("lblGestioneCommessa"));
    lblGestioneCommessa->setFont(font1);
    lblGestioneCommessa->setTextFormat(Qt::PlainText);
    lblGestioneCommessa->setTextInteractionFlags(Qt::NoTextInteraction);

    vboxLayout3->addWidget(lblGestioneCommessa);

    spacerItem2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout3->addItem(spacerItem2);


    hboxLayout1->addLayout(vboxLayout3);

    line = new QFrame(frameControlBox);
    line->setObjectName(QString::fromUtf8("line"));
    line->setFrameShape(QFrame::VLine);
    line->setFrameShadow(QFrame::Sunken);

    hboxLayout1->addWidget(line);

    vboxLayout4 = new QVBoxLayout();
    vboxLayout4->setSpacing(0);
    vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
    cmdNuovaCommessa = new QPushButton(frameControlBox);
    cmdNuovaCommessa->setObjectName(QString::fromUtf8("cmdNuovaCommessa"));
    cmdNuovaCommessa->setCursor(QCursor(Qt::PointingHandCursor));
    cmdNuovaCommessa->setFocusPolicy(Qt::NoFocus);
    cmdNuovaCommessa->setLayoutDirection(Qt::LeftToRight);
    cmdNuovaCommessa->setIcon(QIcon(QString::fromUtf8(":/NuovaCommessa/Xiria 1.1.2/Xiria 1.1.2/128x128/apps/fsview.png")));
    cmdNuovaCommessa->setIconSize(QSize(64, 64));
    cmdNuovaCommessa->setFlat(true);

    vboxLayout4->addWidget(cmdNuovaCommessa);

    lblAnagrafica_2 = new QLabel(frameControlBox);
    lblAnagrafica_2->setObjectName(QString::fromUtf8("lblAnagrafica_2"));
    lblAnagrafica_2->setFont(font1);
    lblAnagrafica_2->setTextFormat(Qt::PlainText);
    lblAnagrafica_2->setTextInteractionFlags(Qt::NoTextInteraction);

    vboxLayout4->addWidget(lblAnagrafica_2);

    spacerItem3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout4->addItem(spacerItem3);


    hboxLayout1->addLayout(vboxLayout4);

    vboxLayout5 = new QVBoxLayout();
    vboxLayout5->setSpacing(0);
    vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
    cmdAttivaBarCode = new QPushButton(frameControlBox);
    cmdAttivaBarCode->setObjectName(QString::fromUtf8("cmdAttivaBarCode"));
    cmdAttivaBarCode->setCursor(QCursor(Qt::PointingHandCursor));
    cmdAttivaBarCode->setFocusPolicy(Qt::NoFocus);
    cmdAttivaBarCode->setLayoutDirection(Qt::LeftToRight);
    cmdAttivaBarCode->setIcon(QIcon(QString::fromUtf8(":/LettoreBarcode/Xiria 1.1.2/Xiria 1.1.2/128x128/apps/scanner.png")));
    cmdAttivaBarCode->setIconSize(QSize(64, 64));
    cmdAttivaBarCode->setCheckable(true);
    cmdAttivaBarCode->setFlat(true);

    vboxLayout5->addWidget(cmdAttivaBarCode);

    lblAnagrafica_3 = new QLabel(frameControlBox);
    lblAnagrafica_3->setObjectName(QString::fromUtf8("lblAnagrafica_3"));
    lblAnagrafica_3->setFont(font1);
    lblAnagrafica_3->setTextFormat(Qt::PlainText);
    lblAnagrafica_3->setTextInteractionFlags(Qt::NoTextInteraction);

    vboxLayout5->addWidget(lblAnagrafica_3);

    spacerItem4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout5->addItem(spacerItem4);


    hboxLayout1->addLayout(vboxLayout5);

    vboxLayout6 = new QVBoxLayout();
    vboxLayout6->setSpacing(0);
    vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
    cmdTastieraVirtuale = new QPushButton(frameControlBox);
    cmdTastieraVirtuale->setObjectName(QString::fromUtf8("cmdTastieraVirtuale"));
    cmdTastieraVirtuale->setCursor(QCursor(Qt::PointingHandCursor));
    cmdTastieraVirtuale->setFocusPolicy(Qt::NoFocus);
    cmdTastieraVirtuale->setLayoutDirection(Qt::LeftToRight);
    cmdTastieraVirtuale->setIcon(QIcon(QString::fromUtf8(":/TastieraVirtuale/logo")));
    cmdTastieraVirtuale->setIconSize(QSize(64, 64));
    cmdTastieraVirtuale->setCheckable(true);
    cmdTastieraVirtuale->setFlat(true);

    vboxLayout6->addWidget(cmdTastieraVirtuale);

    lblAnagrafica_4 = new QLabel(frameControlBox);
    lblAnagrafica_4->setObjectName(QString::fromUtf8("lblAnagrafica_4"));
    lblAnagrafica_4->setFont(font1);
    lblAnagrafica_4->setTextFormat(Qt::PlainText);
    lblAnagrafica_4->setTextInteractionFlags(Qt::NoTextInteraction);

    vboxLayout6->addWidget(lblAnagrafica_4);

    spacerItem5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout6->addItem(spacerItem5);


    hboxLayout1->addLayout(vboxLayout6);

    line_3 = new QFrame(frameControlBox);
    line_3->setObjectName(QString::fromUtf8("line_3"));
    line_3->setFrameShape(QFrame::VLine);
    line_3->setFrameShadow(QFrame::Sunken);

    hboxLayout1->addWidget(line_3);

    vboxLayout7 = new QVBoxLayout();
    vboxLayout7->setSpacing(0);
    vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
    cmdReportCommesseCapitaliAperti = new QPushButton(frameControlBox);
    cmdReportCommesseCapitaliAperti->setObjectName(QString::fromUtf8("cmdReportCommesseCapitaliAperti"));
    cmdReportCommesseCapitaliAperti->setCursor(QCursor(Qt::PointingHandCursor));
    cmdReportCommesseCapitaliAperti->setFocusPolicy(Qt::NoFocus);
    cmdReportCommesseCapitaliAperti->setLayoutDirection(Qt::LeftToRight);
    cmdReportCommesseCapitaliAperti->setIcon(QIcon(QString::fromUtf8(":/ReportCommesseAperte/Xiria 1.1.2/Xiria 1.1.2/128x128/apps/easymoblog.png")));
    cmdReportCommesseCapitaliAperti->setIconSize(QSize(64, 64));
    cmdReportCommesseCapitaliAperti->setFlat(true);

    vboxLayout7->addWidget(cmdReportCommesseCapitaliAperti);

    lblAnagrafica_5 = new QLabel(frameControlBox);
    lblAnagrafica_5->setObjectName(QString::fromUtf8("lblAnagrafica_5"));
    lblAnagrafica_5->setFont(font1);
    lblAnagrafica_5->setTextFormat(Qt::PlainText);
    lblAnagrafica_5->setTextInteractionFlags(Qt::NoTextInteraction);

    vboxLayout7->addWidget(lblAnagrafica_5);

    spacerItem6 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout7->addItem(spacerItem6);


    hboxLayout1->addLayout(vboxLayout7);

    vboxLayout8 = new QVBoxLayout();
    vboxLayout8->setSpacing(0);
    vboxLayout8->setObjectName(QString::fromUtf8("vboxLayout8"));
    cmdStoricoCliente = new QPushButton(frameControlBox);
    cmdStoricoCliente->setObjectName(QString::fromUtf8("cmdStoricoCliente"));
    cmdStoricoCliente->setCursor(QCursor(Qt::PointingHandCursor));
    cmdStoricoCliente->setFocusPolicy(Qt::NoFocus);
    cmdStoricoCliente->setLayoutDirection(Qt::LeftToRight);
    cmdStoricoCliente->setIcon(QIcon(QString::fromUtf8(":/ReportStoricoCliente/Xiria 1.1.2/Xiria 1.1.2/128x128/apps/file-manager1.png")));
    cmdStoricoCliente->setIconSize(QSize(64, 64));
    cmdStoricoCliente->setFlat(true);

    vboxLayout8->addWidget(cmdStoricoCliente);

    lblAnagrafica_6 = new QLabel(frameControlBox);
    lblAnagrafica_6->setObjectName(QString::fromUtf8("lblAnagrafica_6"));
    lblAnagrafica_6->setFont(font1);
    lblAnagrafica_6->setTextFormat(Qt::PlainText);
    lblAnagrafica_6->setTextInteractionFlags(Qt::NoTextInteraction);

    vboxLayout8->addWidget(lblAnagrafica_6);

    spacerItem7 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout8->addItem(spacerItem7);


    hboxLayout1->addLayout(vboxLayout8);

    spacerItem8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout1->addItem(spacerItem8);

    spacerItem9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout1->addItem(spacerItem9);

    vboxLayout9 = new QVBoxLayout();
    vboxLayout9->setSpacing(0);
    vboxLayout9->setObjectName(QString::fromUtf8("vboxLayout9"));
    cmdUscitaProgramma = new QPushButton(frameControlBox);
    cmdUscitaProgramma->setObjectName(QString::fromUtf8("cmdUscitaProgramma"));
    cmdUscitaProgramma->setCursor(QCursor(Qt::PointingHandCursor));
    cmdUscitaProgramma->setFocusPolicy(Qt::NoFocus);
    cmdUscitaProgramma->setLayoutDirection(Qt::LeftToRight);
    cmdUscitaProgramma->setIcon(QIcon(QString::fromUtf8(":/Chiusura/Xiria 1.1.2/Xiria 1.1.2/128x128/apps/mac.png")));
    cmdUscitaProgramma->setIconSize(QSize(64, 64));
    cmdUscitaProgramma->setFlat(true);

    vboxLayout9->addWidget(cmdUscitaProgramma);

    lblAnagrafica_7 = new QLabel(frameControlBox);
    lblAnagrafica_7->setObjectName(QString::fromUtf8("lblAnagrafica_7"));
    QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(lblAnagrafica_7->sizePolicy().hasHeightForWidth());
    lblAnagrafica_7->setSizePolicy(sizePolicy);
    lblAnagrafica_7->setFont(font1);
    lblAnagrafica_7->setTextFormat(Qt::PlainText);
    lblAnagrafica_7->setScaledContents(true);
    lblAnagrafica_7->setTextInteractionFlags(Qt::NoTextInteraction);

    vboxLayout9->addWidget(lblAnagrafica_7);

    spacerItem10 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout9->addItem(spacerItem10);


    hboxLayout1->addLayout(vboxLayout9);


    hboxLayout->addLayout(hboxLayout1);


    vboxLayout->addWidget(frameControlBox);

    dockControlBox->setWidget(dockWidgetContents);
    MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), dockControlBox);
    dockShortKey = new QDockWidget(MainWindow);
    dockShortKey->setObjectName(QString::fromUtf8("dockShortKey"));
    dockShortKey->setMinimumSize(QSize(250, 0));
    QFont font2;
    font2.setBold(true);
    font2.setItalic(true);
    font2.setWeight(75);
    dockShortKey->setFont(font2);
    dockShortKey->setFeatures(QDockWidget::NoDockWidgetFeatures);
    dockShortKey->setAllowedAreas(Qt::RightDockWidgetArea);
    dockWidgetContents_2 = new QWidget(dockShortKey);
    dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
    vboxLayout10 = new QVBoxLayout(dockWidgetContents_2);
    vboxLayout10->setObjectName(QString::fromUtf8("vboxLayout10"));
    vboxLayout10->setContentsMargins(0, 0, 0, 0);
    vboxLayout11 = new QVBoxLayout();
    vboxLayout11->setSpacing(0);
    vboxLayout11->setObjectName(QString::fromUtf8("vboxLayout11"));
    toolBoxShortKey = new QToolBox(dockWidgetContents_2);
    toolBoxShortKey->setObjectName(QString::fromUtf8("toolBoxShortKey"));
    QFont font3;
    font3.setBold(false);
    font3.setItalic(true);
    font3.setWeight(50);
    toolBoxShortKey->setFont(font3);
    toolBoxShortKey->setFrameShape(QFrame::Box);
    toolBoxShortKey->setFrameShadow(QFrame::Raised);
    pageAnagrafica = new QWidget();
    pageAnagrafica->setObjectName(QString::fromUtf8("pageAnagrafica"));
    pageAnagrafica->setGeometry(QRect(0, 0, 196, 332));
    vboxLayout12 = new QVBoxLayout(pageAnagrafica);
    vboxLayout12->setObjectName(QString::fromUtf8("vboxLayout12"));
    vboxLayout13 = new QVBoxLayout();
    vboxLayout13->setObjectName(QString::fromUtf8("vboxLayout13"));
    vboxLayout14 = new QVBoxLayout();
    vboxLayout14->setObjectName(QString::fromUtf8("vboxLayout14"));
    cmdNuovoCliente = new QPushButton(pageAnagrafica);
    cmdNuovoCliente->setObjectName(QString::fromUtf8("cmdNuovoCliente"));
    cmdNuovoCliente->setCursor(QCursor(Qt::PointingHandCursor));
    cmdNuovoCliente->setFocusPolicy(Qt::NoFocus);
    cmdNuovoCliente->setLayoutDirection(Qt::LeftToRight);
    cmdNuovoCliente->setIcon(QIcon(QString::fromUtf8(":/NuovoUtente/Xiria 1.1.2/Xiria 1.1.2/128x128/apps/personal.png")));
    cmdNuovoCliente->setIconSize(QSize(160, 64));
    cmdNuovoCliente->setFlat(true);

    vboxLayout14->addWidget(cmdNuovoCliente);

    lblAnagraficaNuovoCliente = new QLabel(pageAnagrafica);
    lblAnagraficaNuovoCliente->setObjectName(QString::fromUtf8("lblAnagraficaNuovoCliente"));
    lblAnagraficaNuovoCliente->setFont(font1);
    lblAnagraficaNuovoCliente->setTextFormat(Qt::PlainText);
    lblAnagraficaNuovoCliente->setScaledContents(false);
    lblAnagraficaNuovoCliente->setAlignment(Qt::AlignCenter);
    lblAnagraficaNuovoCliente->setTextInteractionFlags(Qt::NoTextInteraction);

    vboxLayout14->addWidget(lblAnagraficaNuovoCliente);


    vboxLayout13->addLayout(vboxLayout14);

    vboxLayout15 = new QVBoxLayout();
    vboxLayout15->setObjectName(QString::fromUtf8("vboxLayout15"));
    cmdRicercaCliente = new QPushButton(pageAnagrafica);
    cmdRicercaCliente->setObjectName(QString::fromUtf8("cmdRicercaCliente"));
    cmdRicercaCliente->setCursor(QCursor(Qt::PointingHandCursor));
    cmdRicercaCliente->setFocusPolicy(Qt::NoFocus);
    cmdRicercaCliente->setLayoutDirection(Qt::LeftToRight);
    cmdRicercaCliente->setIcon(QIcon(QString::fromUtf8(":/RicercaUtente/Xiria 1.1.2/Xiria 1.1.2/128x128/apps/linuxconf.png")));
    cmdRicercaCliente->setIconSize(QSize(160, 64));
    cmdRicercaCliente->setFlat(true);

    vboxLayout15->addWidget(cmdRicercaCliente);

    lblAnagraficaNuovoCliente_2 = new QLabel(pageAnagrafica);
    lblAnagraficaNuovoCliente_2->setObjectName(QString::fromUtf8("lblAnagraficaNuovoCliente_2"));
    lblAnagraficaNuovoCliente_2->setFont(font1);
    lblAnagraficaNuovoCliente_2->setTextFormat(Qt::PlainText);
    lblAnagraficaNuovoCliente_2->setScaledContents(false);
    lblAnagraficaNuovoCliente_2->setAlignment(Qt::AlignCenter);
    lblAnagraficaNuovoCliente_2->setTextInteractionFlags(Qt::NoTextInteraction);

    vboxLayout15->addWidget(lblAnagraficaNuovoCliente_2);


    vboxLayout13->addLayout(vboxLayout15);

    vboxLayout16 = new QVBoxLayout();
    vboxLayout16->setObjectName(QString::fromUtf8("vboxLayout16"));
    cmdRicercaCliente_2 = new QPushButton(pageAnagrafica);
    cmdRicercaCliente_2->setObjectName(QString::fromUtf8("cmdRicercaCliente_2"));
    cmdRicercaCliente_2->setCursor(QCursor(Qt::PointingHandCursor));
    cmdRicercaCliente_2->setFocusPolicy(Qt::NoFocus);
    cmdRicercaCliente_2->setLayoutDirection(Qt::LeftToRight);
    cmdRicercaCliente_2->setIcon(QIcon(QString::fromUtf8(":/RicercaStoricoCliente/Xiria 1.1.2/Xiria 1.1.2/128x128/apps/kghostview.png")));
    cmdRicercaCliente_2->setIconSize(QSize(160, 64));
    cmdRicercaCliente_2->setFlat(true);

    vboxLayout16->addWidget(cmdRicercaCliente_2);

    lblAnagraficaNuovoCliente_7 = new QLabel(pageAnagrafica);
    lblAnagraficaNuovoCliente_7->setObjectName(QString::fromUtf8("lblAnagraficaNuovoCliente_7"));
    lblAnagraficaNuovoCliente_7->setFont(font1);
    lblAnagraficaNuovoCliente_7->setTextFormat(Qt::PlainText);
    lblAnagraficaNuovoCliente_7->setScaledContents(false);
    lblAnagraficaNuovoCliente_7->setAlignment(Qt::AlignCenter);
    lblAnagraficaNuovoCliente_7->setTextInteractionFlags(Qt::NoTextInteraction);

    vboxLayout16->addWidget(lblAnagraficaNuovoCliente_7);


    vboxLayout13->addLayout(vboxLayout16);


    vboxLayout12->addLayout(vboxLayout13);

    spacerItem11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout12->addItem(spacerItem11);

    toolBoxShortKey->addItem(pageAnagrafica, QIcon(QString::fromUtf8(":/Anagrafica/Xiria 1.1.2/Xiria 1.1.2/128x128/apps/packagesettings.png")), QApplication::translate("MainWindow", "Anagrafica", 0));
    pageCommessa = new QWidget();
    pageCommessa->setObjectName(QString::fromUtf8("pageCommessa"));
    pageCommessa->setGeometry(QRect(0, 0, 196, 228));
    vboxLayout17 = new QVBoxLayout(pageCommessa);
    vboxLayout17->setObjectName(QString::fromUtf8("vboxLayout17"));
    vboxLayout18 = new QVBoxLayout();
    vboxLayout18->setObjectName(QString::fromUtf8("vboxLayout18"));
    vboxLayout19 = new QVBoxLayout();
    vboxLayout19->setObjectName(QString::fromUtf8("vboxLayout19"));
    cmdTrash = new QPushButton(pageCommessa);
    cmdTrash->setObjectName(QString::fromUtf8("cmdTrash"));
    cmdTrash->setCursor(QCursor(Qt::PointingHandCursor));
    cmdTrash->setFocusPolicy(Qt::NoFocus);
    cmdTrash->setAcceptDrops(true);
    cmdTrash->setLayoutDirection(Qt::LeftToRight);
    cmdTrash->setIcon(QIcon(QString::fromUtf8(":/Trash/Xiria 1.1.2/Xiria 1.1.2/128x128/apps/ark.png")));
    cmdTrash->setIconSize(QSize(160, 64));
    cmdTrash->setFlat(true);

    vboxLayout19->addWidget(cmdTrash);

    lblAnagraficaNuovoCliente_6 = new QLabel(pageCommessa);
    lblAnagraficaNuovoCliente_6->setObjectName(QString::fromUtf8("lblAnagraficaNuovoCliente_6"));
    lblAnagraficaNuovoCliente_6->setFont(font1);
    lblAnagraficaNuovoCliente_6->setTextFormat(Qt::PlainText);
    lblAnagraficaNuovoCliente_6->setScaledContents(false);
    lblAnagraficaNuovoCliente_6->setAlignment(Qt::AlignCenter);
    lblAnagraficaNuovoCliente_6->setTextInteractionFlags(Qt::NoTextInteraction);

    vboxLayout19->addWidget(lblAnagraficaNuovoCliente_6);


    vboxLayout18->addLayout(vboxLayout19);

    vboxLayout20 = new QVBoxLayout();
    vboxLayout20->setObjectName(QString::fromUtf8("vboxLayout20"));
    cmdTrash_2 = new QPushButton(pageCommessa);
    cmdTrash_2->setObjectName(QString::fromUtf8("cmdTrash_2"));
    cmdTrash_2->setCursor(QCursor(Qt::PointingHandCursor));
    cmdTrash_2->setFocusPolicy(Qt::NoFocus);
    cmdTrash_2->setAcceptDrops(true);
    cmdTrash_2->setLayoutDirection(Qt::LeftToRight);
    cmdTrash_2->setIcon(QIcon(QString::fromUtf8(":/StampaCommessa/Xiria 1.1.2/Xiria 1.1.2/128x128/apps/kjobviewer.png")));
    cmdTrash_2->setIconSize(QSize(160, 64));
    cmdTrash_2->setFlat(true);

    vboxLayout20->addWidget(cmdTrash_2);

    lblAnagraficaNuovoCliente_8 = new QLabel(pageCommessa);
    lblAnagraficaNuovoCliente_8->setObjectName(QString::fromUtf8("lblAnagraficaNuovoCliente_8"));
    lblAnagraficaNuovoCliente_8->setFont(font1);
    lblAnagraficaNuovoCliente_8->setTextFormat(Qt::PlainText);
    lblAnagraficaNuovoCliente_8->setScaledContents(false);
    lblAnagraficaNuovoCliente_8->setAlignment(Qt::AlignCenter);
    lblAnagraficaNuovoCliente_8->setTextInteractionFlags(Qt::NoTextInteraction);

    vboxLayout20->addWidget(lblAnagraficaNuovoCliente_8);


    vboxLayout18->addLayout(vboxLayout20);


    vboxLayout17->addLayout(vboxLayout18);

    spacerItem12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout17->addItem(spacerItem12);

    toolBoxShortKey->addItem(pageCommessa, QIcon(QString::fromUtf8(":/NuovaCommessa/Xiria 1.1.2/Xiria 1.1.2/128x128/apps/fsview.png")), QApplication::translate("MainWindow", "Commessa", 0));
    pageGeneralSettings = new QWidget();
    pageGeneralSettings->setObjectName(QString::fromUtf8("pageGeneralSettings"));
    pageGeneralSettings->setGeometry(QRect(0, 0, 194, 253));
    vboxLayout21 = new QVBoxLayout(pageGeneralSettings);
    vboxLayout21->setObjectName(QString::fromUtf8("vboxLayout21"));
    vboxLayout22 = new QVBoxLayout();
    vboxLayout22->setSpacing(6);
    vboxLayout22->setObjectName(QString::fromUtf8("vboxLayout22"));
    cmdDBSettings = new QPushButton(pageGeneralSettings);
    cmdDBSettings->setObjectName(QString::fromUtf8("cmdDBSettings"));
    cmdDBSettings->setCursor(QCursor(Qt::PointingHandCursor));
    cmdDBSettings->setFocusPolicy(Qt::NoFocus);
    cmdDBSettings->setLayoutDirection(Qt::LeftToRight);
    cmdDBSettings->setIcon(QIcon(QString::fromUtf8(":/DBSettings/Xiria 1.1.2/Xiria 1.1.2/128x128/apps/networksettings.png")));
    cmdDBSettings->setIconSize(QSize(160, 64));
    cmdDBSettings->setFlat(true);

    vboxLayout22->addWidget(cmdDBSettings);

    lblDBSettings = new QLabel(pageGeneralSettings);
    lblDBSettings->setObjectName(QString::fromUtf8("lblDBSettings"));
    lblDBSettings->setFont(font1);
    lblDBSettings->setTextFormat(Qt::PlainText);
    lblDBSettings->setScaledContents(false);
    lblDBSettings->setAlignment(Qt::AlignCenter);
    lblDBSettings->setTextInteractionFlags(Qt::NoTextInteraction);

    vboxLayout22->addWidget(lblDBSettings);


    vboxLayout21->addLayout(vboxLayout22);

    vboxLayout23 = new QVBoxLayout();
    vboxLayout23->setObjectName(QString::fromUtf8("vboxLayout23"));
    cmdSoftwareSettings_2 = new QPushButton(pageGeneralSettings);
    cmdSoftwareSettings_2->setObjectName(QString::fromUtf8("cmdSoftwareSettings_2"));
    cmdSoftwareSettings_2->setCursor(QCursor(Qt::PointingHandCursor));
    cmdSoftwareSettings_2->setFocusPolicy(Qt::NoFocus);
    cmdSoftwareSettings_2->setLayoutDirection(Qt::LeftToRight);
    cmdSoftwareSettings_2->setIcon(QIcon(QString::fromUtf8(":/Settings/Xiria 1.1.2/Xiria 1.1.2/128x128/apps/agt_utilities.png")));
    cmdSoftwareSettings_2->setIconSize(QSize(160, 64));
    cmdSoftwareSettings_2->setFlat(true);

    vboxLayout23->addWidget(cmdSoftwareSettings_2);

    lblSoftwareSettings_2 = new QLabel(pageGeneralSettings);
    lblSoftwareSettings_2->setObjectName(QString::fromUtf8("lblSoftwareSettings_2"));
    lblSoftwareSettings_2->setFont(font1);
    lblSoftwareSettings_2->setTextFormat(Qt::PlainText);
    lblSoftwareSettings_2->setScaledContents(false);
    lblSoftwareSettings_2->setAlignment(Qt::AlignCenter);
    lblSoftwareSettings_2->setTextInteractionFlags(Qt::NoTextInteraction);

    vboxLayout23->addWidget(lblSoftwareSettings_2);


    vboxLayout21->addLayout(vboxLayout23);

    spacerItem13 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

    vboxLayout21->addItem(spacerItem13);

    lblInfoSettings = new QLabel(pageGeneralSettings);
    lblInfoSettings->setObjectName(QString::fromUtf8("lblInfoSettings"));
    lblInfoSettings->setMaximumSize(QSize(183, 183));
    QFont font4;
    font4.setItalic(true);
    lblInfoSettings->setFont(font4);
    lblInfoSettings->setContextMenuPolicy(Qt::NoContextMenu);
    lblInfoSettings->setTextFormat(Qt::PlainText);
    lblInfoSettings->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
    lblInfoSettings->setWordWrap(true);

    vboxLayout21->addWidget(lblInfoSettings);

    toolBoxShortKey->addItem(pageGeneralSettings, QIcon(QString::fromUtf8(":/Settings/Xiria 1.1.2/Xiria 1.1.2/128x128/apps/agt_utilities.png")), QApplication::translate("MainWindow", "Configurazioni", 0));
    pageUserFilter = new QWidget();
    pageUserFilter->setObjectName(QString::fromUtf8("pageUserFilter"));
    pageUserFilter->setGeometry(QRect(0, 0, 226, 355));
    vboxLayout24 = new QVBoxLayout(pageUserFilter);
    vboxLayout24->setObjectName(QString::fromUtf8("vboxLayout24"));
    frameUserFilter = new QFrame(pageUserFilter);
    frameUserFilter->setObjectName(QString::fromUtf8("frameUserFilter"));
    frameUserFilter->setFrameShape(QFrame::StyledPanel);
    frameUserFilter->setFrameShadow(QFrame::Raised);
    hboxLayout2 = new QHBoxLayout(frameUserFilter);
    hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
    vboxLayout25 = new QVBoxLayout();
    vboxLayout25->setObjectName(QString::fromUtf8("vboxLayout25"));
    vboxLayout26 = new QVBoxLayout();
    vboxLayout26->setSpacing(0);
    vboxLayout26->setObjectName(QString::fromUtf8("vboxLayout26"));
    lblNameFilter = new QLabel(frameUserFilter);
    lblNameFilter->setObjectName(QString::fromUtf8("lblNameFilter"));

    vboxLayout26->addWidget(lblNameFilter);

    txtFiltroNomeCliente = new QLineEdit(frameUserFilter);
    txtFiltroNomeCliente->setObjectName(QString::fromUtf8("txtFiltroNomeCliente"));

    vboxLayout26->addWidget(txtFiltroNomeCliente);


    vboxLayout25->addLayout(vboxLayout26);

    vboxLayout27 = new QVBoxLayout();
    vboxLayout27->setSpacing(0);
    vboxLayout27->setObjectName(QString::fromUtf8("vboxLayout27"));
    lblSurnameFilter = new QLabel(frameUserFilter);
    lblSurnameFilter->setObjectName(QString::fromUtf8("lblSurnameFilter"));

    vboxLayout27->addWidget(lblSurnameFilter);

    txtFiltroCognomeCliente = new QLineEdit(frameUserFilter);
    txtFiltroCognomeCliente->setObjectName(QString::fromUtf8("txtFiltroCognomeCliente"));

    vboxLayout27->addWidget(txtFiltroCognomeCliente);


    vboxLayout25->addLayout(vboxLayout27);

    vboxLayout28 = new QVBoxLayout();
    vboxLayout28->setSpacing(0);
    vboxLayout28->setObjectName(QString::fromUtf8("vboxLayout28"));
    lblCodiceIvaFilter = new QLabel(frameUserFilter);
    lblCodiceIvaFilter->setObjectName(QString::fromUtf8("lblCodiceIvaFilter"));

    vboxLayout28->addWidget(lblCodiceIvaFilter);

    txtFiltroCodiceFiscaleIvaCliente = new QLineEdit(frameUserFilter);
    txtFiltroCodiceFiscaleIvaCliente->setObjectName(QString::fromUtf8("txtFiltroCodiceFiscaleIvaCliente"));

    vboxLayout28->addWidget(txtFiltroCodiceFiscaleIvaCliente);


    vboxLayout25->addLayout(vboxLayout28);

    spacerItem14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout25->addItem(spacerItem14);

    hboxLayout3 = new QHBoxLayout();
    hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
    cmdStartUserSearch = new QPushButton(frameUserFilter);
    cmdStartUserSearch->setObjectName(QString::fromUtf8("cmdStartUserSearch"));
    cmdStartUserSearch->setIcon(QIcon(QString::fromUtf8(":/RicercaUtente/Xiria 1.1.2/Xiria 1.1.2/128x128/apps/linuxconf.png")));

    hboxLayout3->addWidget(cmdStartUserSearch);

    spacerItem15 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

    hboxLayout3->addItem(spacerItem15);

    cmdReturnAnagrafica = new QPushButton(frameUserFilter);
    cmdReturnAnagrafica->setObjectName(QString::fromUtf8("cmdReturnAnagrafica"));
    cmdReturnAnagrafica->setIcon(QIcon(QString::fromUtf8(":/Anagrafica/Xiria 1.1.2/Xiria 1.1.2/128x128/apps/packagesettings.png")));

    hboxLayout3->addWidget(cmdReturnAnagrafica);


    vboxLayout25->addLayout(hboxLayout3);


    hboxLayout2->addLayout(vboxLayout25);


    vboxLayout24->addWidget(frameUserFilter);

    toolBoxShortKey->addItem(pageUserFilter, QIcon(QString::fromUtf8(":/RicercaUtente/Xiria 1.1.2/Xiria 1.1.2/128x128/apps/linuxconf.png")), QApplication::translate("MainWindow", "Filtro Cliente", 0));

    vboxLayout11->addWidget(toolBoxShortKey);

    spacerItem16 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Fixed);

    vboxLayout11->addItem(spacerItem16);

    spacerItem17 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

    vboxLayout11->addItem(spacerItem17);


    vboxLayout10->addLayout(vboxLayout11);

    dockShortKey->setWidget(dockWidgetContents_2);
    MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockShortKey);
    toolBar = new QToolBar(MainWindow);
    toolBar->setObjectName(QString::fromUtf8("toolBar"));
    toolBar->setMovable(false);
    toolBar->setFloatable(false);
    MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

    retranslateUi(MainWindow);

    toolBoxShortKey->setCurrentIndex(3);


    QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
    MainWindow->setWindowTitle(QApplication::translate("MainWindow", "LaundryBot - versione 1.0", 0));
    dockControlBox->setWindowTitle(QApplication::translate("MainWindow", "Laundry ControlBox", 0));
    cmdGestioneAnagrafica->setToolTip(QApplication::translate("MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:italic;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-style:normal;\">Gestione anagrafica clienti...</p></body></html>", 0));
    cmdGestioneAnagrafica->setText(QString());
    lblGestioneAnagrafica->setText(QApplication::translate("MainWindow", "Gestione Anagrafica", 0));
    cmdGestioneTastierino->setToolTip(QApplication::translate("MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:italic;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-style:normal;\">Gestione tastierino pezzi...</p></body></html>", 0));
    cmdGestioneTastierino->setText(QString());
    lblGestioneTastierino->setText(QApplication::translate("MainWindow", "Gestione Tastierino", 0));
    cmdGestioneCommessa->setToolTip(QApplication::translate("MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:8pt; font-weight:400; font-style:italic;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-style:normal;\">Gestione commesse...</p></body></html>", 0));
    cmdGestioneCommessa->setText(QString());
    lblGestioneCommessa->setText(QApplication::translate("MainWindow", "Gestione Commesse", 0));
    cmdNuovaCommessa->setToolTip(QApplication::translate("MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Crea una nuova commessa...</p></body></html>", 0));
    cmdNuovaCommessa->setText(QString());
    lblAnagrafica_2->setText(QApplication::translate("MainWindow", "Nuova Commessa", 0));
    cmdAttivaBarCode->setToolTip(QApplication::translate("MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:italic;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-style:normal;\">Attiva lettore di barcode...</p></body></html>", 0));
    cmdAttivaBarCode->setText(QString());
    lblAnagrafica_3->setText(QApplication::translate("MainWindow", "Scanner Barcode", 0));
    cmdTastieraVirtuale->setToolTip(QApplication::translate("MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:italic;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-style:normal;\">Attiva tastiera virtuale...</p></body></html>", 0));
    cmdTastieraVirtuale->setText(QString());
    lblAnagrafica_4->setText(QApplication::translate("MainWindow", "Tastiera Virtuale", 0));
    cmdReportCommesseCapitaliAperti->setToolTip(QApplication::translate("MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Reportistica commesse e capitali...</p></body></html>", 0));
    cmdReportCommesseCapitaliAperti->setText(QString());
    lblAnagrafica_5->setText(QApplication::translate("MainWindow", "Commesse Aperte", 0));
    cmdStoricoCliente->setToolTip(QApplication::translate("MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Report storico clienti...</p></body></html>", 0));
    cmdStoricoCliente->setText(QString());
    lblAnagrafica_6->setText(QApplication::translate("MainWindow", "Storico Cliente", 0));
    cmdUscitaProgramma->setToolTip(QApplication::translate("MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:italic;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-style:normal;\">Termina la sessione...</p></body></html>", 0));
    cmdUscitaProgramma->setText(QString());
    lblAnagrafica_7->setText(QApplication::translate("MainWindow", "Termina Sessione", 0));
    dockShortKey->setWindowTitle(QApplication::translate("MainWindow", "Laundry ShortKey ", 0));
    cmdNuovoCliente->setToolTip(QApplication::translate("MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Nuovo cliente</p></body></html>", 0));
    cmdNuovoCliente->setText(QString());
    lblAnagraficaNuovoCliente->setText(QApplication::translate("MainWindow", "Nuovo Cliente", 0));
    cmdRicercaCliente->setToolTip(QApplication::translate("MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Ricerca cliente in archivio</p></body></html>", 0));
    cmdRicercaCliente->setText(QString());
    lblAnagraficaNuovoCliente_2->setText(QApplication::translate("MainWindow", "Ricerca Cliente", 0));
    cmdRicercaCliente_2->setToolTip(QApplication::translate("MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Ricerca storico cliente</p></body></html>", 0));
    cmdRicercaCliente_2->setText(QString());
    lblAnagraficaNuovoCliente_7->setText(QApplication::translate("MainWindow", "Ricerca Storico Cliente", 0));
    toolBoxShortKey->setItemText(toolBoxShortKey->indexOf(pageAnagrafica), QApplication::translate("MainWindow", "Anagrafica", 0));
    cmdTrash->setToolTip(QApplication::translate("MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Cestino contenitore pezzi</p></body></html>", 0));
    cmdTrash->setText(QString());
    lblAnagraficaNuovoCliente_6->setText(QApplication::translate("MainWindow", "Cestino Pezzi", 0));
    cmdTrash_2->setToolTip(QApplication::translate("MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\">Ristampa scontrino...</p></body></html>", 0));
    cmdTrash_2->setText(QString());
    lblAnagraficaNuovoCliente_8->setText(QApplication::translate("MainWindow", "Stampa Commessa", 0));
    toolBoxShortKey->setItemText(toolBoxShortKey->indexOf(pageCommessa), QApplication::translate("MainWindow", "Commessa", 0));
    cmdDBSettings->setToolTip(QApplication::translate("MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8pt;\">Configurazione informazioni database</p></body></html>", 0));
    cmdDBSettings->setText(QString());
    lblDBSettings->setText(QApplication::translate("MainWindow", "Configurazione database", 0));
    cmdSoftwareSettings_2->setToolTip(QApplication::translate("MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8pt;\">Configurazione informazioni software</p></body></html>", 0));
    cmdSoftwareSettings_2->setText(QString());
    lblSoftwareSettings_2->setText(QApplication::translate("MainWindow", "Configurazione Applicativo", 0));
    lblInfoSettings->setText(QApplication::translate("MainWindow", "ATTENZIONE: e' necessario configurare i dati di accesso al database per potere iniziare ad utilizzare il software per la prima volta. Servirsi dei tasti su presenti per eseguire le necessarie configurazioni. Eseguire tale procedura solo in caso di visualizzazione del presente messaggio.", 0));
    toolBoxShortKey->setItemText(toolBoxShortKey->indexOf(pageGeneralSettings), QApplication::translate("MainWindow", "Configurazioni", 0));
    lblNameFilter->setText(QApplication::translate("MainWindow", "Nome cliente", 0));
    lblSurnameFilter->setText(QApplication::translate("MainWindow", "Cognome cliente", 0));
    lblCodiceIvaFilter->setText(QApplication::translate("MainWindow", "CodiceFiscale o P.iva", 0));
    cmdStartUserSearch->setToolTip(QApplication::translate("MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:italic;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Avvia la ricerca</p></body></html>", 0));
    cmdStartUserSearch->setText(QApplication::translate("MainWindow", "&Ricerca", 0));
    cmdReturnAnagrafica->setToolTip(QApplication::translate("MainWindow", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:italic;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Annulla la ricerca</p></body></html>", 0));
    cmdReturnAnagrafica->setText(QApplication::translate("MainWindow", "&Annulla", 0));
    toolBoxShortKey->setItemText(toolBoxShortKey->indexOf(pageUserFilter), QApplication::translate("MainWindow", "Filtro Cliente", 0));
    toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

#endif // UI_FRMMAINLAUNDRY_H
