#ifndef BU_H
#define BU_H

#include "figure.h"
#include "rectangle.h"
#include "cercle.h"
#include "triangle.h"
#include "segment.h"
#include <vector>

typedef struct
{
    Figure f;
    vector<QGraphicsItem *> item;
    QString nom;
    bool etat;
}QFigure;

typedef struct
{
    int id;
    QFigure *f;
}QDessin;

enum Objet{SEGMENT, CARRE, TRIANGLE, CERCLE, MULTISEG, ELLIPSE};//Enumeration des figures

#endif // BU_H
