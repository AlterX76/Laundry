SOURCES += main.cpp \
 DBConnector.cpp \
 frmAccetazione.cpp \
 frmMainLaundry.cpp \
 frmNuovoCliente.cpp \
 frmDBSettings.cpp \
 widgetKeyBoard.cpp \
 QKeyPushButton.cpp
TEMPLATE = app
CONFIG += warn_on \
	  thread \
          qt \
 precompile_header \
 release
TARGET = ../bin/laundrybot
RESOURCES -= application.qrc

FORMS += frmAccettazione.ui \
frmMainLaundry.ui \
frmNuovoCliente.ui \
 frmDBSettings.ui
HEADERS += DBConnector.h \
frmAccetazione.h \
frmMainLaundry.h \
frmNuovoCliente.h \
 GlobalConsts.h \
 frmDBSettings.h \
 widgetKeyBoard.h \
 QKeyPushButton.h
RESOURCES += laundry.qrc

QT += sql widgets


win32 {
    RC_FILE = winIcon.rc
}

macx {
    ICON = macIcon.icns
}
