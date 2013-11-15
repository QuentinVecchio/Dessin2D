#-------------------------------------------------
#
# Project created by QtCreator 2013-10-28T17:25:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GUI_DESSIN2D
TEMPLATE = app


SOURCES += main.cpp\
        fenetreprincipale.cpp \
    gui_point.cpp \
    vuegraphique.cpp \
    formsegment.cpp \
    formcarre.cpp

HEADERS  += fenetreprincipale.h \
    gui_point.h \
    vuegraphique.h \
    formsegment.h \
    formcarre.h

FORMS    += fenetreprincipale.ui

RESOURCES += \
    ressources.qrc
