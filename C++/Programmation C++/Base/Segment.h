#ifndef Segment_h
#define Segment_h

#include "Figure.h"
#include "Point2D.h"
#include "Segment.h"
#include <iostream>
#include <ostream>
#include <cmath>
using namespace std;
class Segment : public Figure {

 protected:
    Point2D B;

 public:

    Segment(Point2D A, Point2D B);

    Point2D getB();

    void setB(Point2D B);

    void affiche(ostream& flux) const;

    void translation(Point2D point);

    bool estPerpendiculaire(Segment segment);

    bool estParallele(Segment segment);

    bool seCoupe(Segment segment);

	 float longueur();

 	friend ostream& operator <<(ostream& flux, const Segment& s);
};
#endif // Segment_h
