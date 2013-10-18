#ifndef Quadrilatere_h
#define Quadrilatere_h

#include "Point2D.h"
#include "Quadrilatere.h"
#include "Segment.h"


class Quadrilatere : public Segment {

 public:

    virtual void Quadrilatere();

    virtual void Quadrilatere(Point2D A, Point2D B, Point2D C, Quadrilatere D);

    virtual Point2D getC();

    virtual Point2D getD();

    virtual void setC(Point2D C);

    virtual void setD(Point2D D);

    virtual void affiche();

    virtual void translation(Point2D point);

 public:
    Point2D C;
    Point2D D;
};

#endif // Quadrilatere_h
