#ifndef Figure_h
#define Figure_h

#include "Point2D.h"
#include <iostream>
#include <ostream>

using namespace std;
class Figure {

 protected:
    Point2D A;

 public:

    Figure();

    Figure(int x, int y);

    Figure(Point2D point);

    virtual void translation(Point2D point);

    virtual void affiche(ostream& flux);

    Point2D getA();

    void setA(Point2D A);

};

ostream& operator <<(ostream& flux, Figure p)
{
	p.affiche(flux);
	return flux;
}
#endif // Figure_h
