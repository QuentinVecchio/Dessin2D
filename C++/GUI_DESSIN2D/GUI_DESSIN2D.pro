#-------------------------------------------------
#
# Project created by QtCreator 2013-10-28T17:25:02
#
#-------------------------------------------------

QT += core gui
QT += xml
QT += printsupport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GUI_DESSIN2D
TEMPLATE = app


SOURCES += main.cpp\
        fenetreprincipale.cpp \
    objets/Cercle/Elippse.cpp \
    objets/Cercle/ArcCercle.cpp \
    objets/Cercle/Cercle.cpp \
    objets/Base/Figure.cpp \
    objets/Base/Point2D.cpp \
    objets/Base/Segment.cpp \
    objets/Quadrilatere/Carre.cpp \
    objets/Quadrilatere/Losange.cpp \
    objets/Quadrilatere/Parallelogramme.cpp \
    objets/Quadrilatere/Quadrangle.cpp \
    objets/Quadrilatere/Quadrilatere.cpp \
    objets/Quadrilatere/Rectangle.cpp \
    objets/Triangle/Equilateral.cpp \
    objets/Triangle/Isocele.cpp \
    objets/Triangle/TRectangle.cpp \
    objets/Triangle/Triangle.cpp \
    gui_point.cpp \
    vuegraphique.cpp \
    formsegment.cpp \
    formcarre.cpp \
    formtriangle.cpp \
    formcercle.cpp \
    presentationobjet.cpp \
    formelippse.cpp \
    formmultisegment.cpp

HEADERS  += fenetreprincipale.h \
    objets/Cercle/Elippse.h \
    objets/Cercle/ArcCercle.h \
    objets/Cercle/Cercle.h \
    objets/Base/Figure.h \
    objets/Base/Point2D.h \
    objets/Base/Segment.h \
    objets/Quadrilatere/Carre.h \
    objets/Quadrilatere/Losange.h \
    objets/Quadrilatere/Parallelogramme.h \
    objets/Quadrilatere/Quadrangle.h \
    objets/Quadrilatere/Quadrilatere.h \
    objets/Quadrilatere/Rectangle.h \
    objets/Triangle/Equilateral.h \
    objets/Triangle/Isocele.h \
    objets/Triangle/TRectangle.h \
    objets/Triangle/Triangle.h \
    gui_point.h \
    vuegraphique.h \
    formsegment.h \
    formcarre.h \
    formtriangle.h \
    formcercle.h \
    presentationobjet.h \
    bu.h \
    formelippse.h \
    formmultisegment.h

FORMS    += fenetreprincipale.ui

RESOURCES += \
    ressources.qrc

