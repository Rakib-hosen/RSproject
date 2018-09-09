#-------------------------------------------------
#
# Project created by QtCreator 2018-08-17T08:45:27
#
#-------------------------------------------------

QT       += core gui widgets

TARGET = RSproject
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    secdialog.cpp \
    thdialog.cpp \
    dialog.cpp \
    dialog1.cpp \
    dialog2.cpp \
    dialog3.cpp \
    dialog4.cpp \
    fodialog.cpp \
    addmindialog.cpp \
    attendencedialog.cpp

HEADERS += \
        mainwindow.h \
    secdialog.h \
    thdialog.h \
    dialog.h \
    dialog1.h \
    dialog2.h \
    dialog3.h \
    dialog4.h \
    fodialog.h \
    addmindialog.h \
    attendencedialog.h

FORMS += \
        mainwindow.ui \
    secdialog.ui \
    thdialog.ui \
    dialog.ui \
    dialog1.ui \
    dialog2.ui \
    dialog3.ui \
    dialog4.ui \
    fodialog.ui \
    addmindialog.ui \
    attendencedialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../../Downloads/rakib.jpg

RESOURCES += \
    resorce.qrc
