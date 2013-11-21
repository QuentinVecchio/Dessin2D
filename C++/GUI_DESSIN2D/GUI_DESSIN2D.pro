#-------------------------------------------------
#
# Project created by QtCreator 2013-10-28T17:25:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GUI_DESSIN2D
TEMPLATE = app

CONFIG -= x86_64

SOURCES += main.cpp\
        fenetreprincipale.cpp \
    gui_point.cpp \
    vuegraphique.cpp \
    formsegment.cpp \
    formcarre.cpp \
    formtriangle.cpp \
    formcercle.cpp \
    figure.cpp \
    segment.cpp \
    point2d.cpp \
    arccercle.cpp \
    cercle.cpp \
    carre.cpp \
    losange.cpp \
    parallelogramme.cpp \
    quadrangle.cpp \
    quadrilatere.cpp \
    rectangle.cpp \
    equilateral.cpp \
    isocele.cpp \
    trectangle.cpp \
    triangle.cpp \
    presentationobjet.cpp \
    formelippse.cpp

HEADERS  += fenetreprincipale.h \
    gui_point.h \
    vuegraphique.h \
    formsegment.h \
    formcarre.h \
    formtriangle.h \
    formcercle.h \
    figure.h \
    segment.h \
    point2d.h \
    arccercle.h \
    cercle.h \
    carre.h \
    losange.h \
    parallelogramme.h \
    quadrangle.h \
    quadrilatere.h \
    rectangle.h \
    equilateral.h \
    isocele.h \
    trectangle.h \
    triangle.h \
    presentationobjet.h \
    bu.h \
    formelippse.h

FORMS    += fenetreprincipale.ui

RESOURCES += \
    ressources.qrc
