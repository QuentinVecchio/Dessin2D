#ifndef Quadrilatere_h
#define Quadrilatere_h

#include "point2D.h"
#include "segment.h"
#include <iostream>
#include <ostream>
using namespace std;

class Quadrilatere : public Segment {

 public:

    Quadrilatere(Point2D A, Point2D B, Point2D C, Point2D D);

    Point2D getC();

    Point2D getD();

    void setC(Point2D C);

    void setD(Point2D D);

    void affiche(ostream& flux) const;

    void translation(Point2D point);

 protected:
    Point2D C;
    Point2D D;
};

#endif // Quadrilatere_h
