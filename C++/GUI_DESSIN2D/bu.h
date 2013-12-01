#ifndef BU_H
#define BU_H

#include "vuegraphique.h"
#include "objets/Cercle/ArcCercle.h"
#include "objets/Base/Figure.h"
#include "objets/Quadrilatere/Rectangle.h"
#include "objets/Cercle/Cercle.h"
#include "objets/Triangle/Triangle.h"
#include "objets/Base/Segment.h"
#include "objets/Cercle/Elippse.h"
#include <vector>

enum Objet{SEGMENT, CARRE, TRIANGLE, CERCLE, MULTISEG, ELLIPSE};//Enumeration des figures

typedef struct
{
    int x;
    int y;
    int tps;
}Anim;
typedef struct
{
    Figure f;
    vector<Point2D> points;
    Objet o;
    vector<QGraphicsItem *> item;
    vector<Anim> pileAnim;
    QString nom;
    int oX;
    int oY;
    int r;
    int cR;
    int cG;
    int cB;
    int cfR;
    int cfG;
    int cfB;
    bool estAnim;
    bool etat;
}QFigure;

typedef struct
{
    int id;
    QFigure *f;
}QDessin;
#endif // BU_H
