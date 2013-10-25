#ifndef Segment_h
#define Segment_h

#include "Figure.h"
#include "Point2D.h"
#include "Segment.h"
#include <iostream>
#include <ostream>

using namespace std;
class Segment : public Figure {

 protected:
    Point2D B;

 public:

    Segment(Point2D A, Point2D B);

    Point2D getB();

    void setB(Point2D B);

    void affiche(ostream& flux);

    void translation(Point2D point);

    bool estPerpendiculaire(Segment segment);

    bool estParallele(Segment segment);

    bool seCoupe(Segment segment);
};
ostream& operator <<(ostream& flux, Segment s)
{
	s.affiche(flux);
	return flux;
}
#endif // Segment_h
