#ifndef Triangle_h
#define Triangle_h

#include "point2D.h"
#include "segment.h"
#include <iostream>
#include <ostream>

using namespace std;
class Triangle : public Segment {

 public:

    Triangle(Point2D A, Point2D B, Point2D C);

    Triangle(Segment base, Point2D C);

    Point2D getC();

    void setC(Point2D C);

    void affiche(ostream& flux) const;

    void translation(Point2D point);

    bool estPlat();

 protected:
    Point2D C;
};

#endif // Triangle_h
