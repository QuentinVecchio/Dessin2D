#ifndef Triangle_h
#define Triangle_h

#include "Point2D.h"
#include "Segment.h"
#include <iostream>
#include <ostream>

using namespace std;
class Triangle : public Segment {

 public:

    Triangle(Point2D A, Point2D B, Point2D C);

    Triangle(Segment base, Point2D C);

    Point2D getC();

    void setC(Point2D C);

    void affiche(ostream& flux);

    void translation(Point2D point);

    bool estPlat();

 protected:
    Point2D C;
};

ostream& operator <<(ostream& flux, Triangle t)
{
	t.affiche(flux);
	return flux;
}
#endif // Triangle_h
