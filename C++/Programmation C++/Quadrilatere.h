#ifndef Quadrilatere_h
#define Quadrilatere_h

#include "Point2D.h"
#include "Quadrilatere.h"
#include "Segment.h"
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
    
    void affiche(ostream& flux);

    void translation(Point2D point);

 private:
    Point2D C;
    Point2D D;
};
ostream& operator <<(ostream& flux, Quadrilatere q)
{
	q.affiche(flux);
	return flux;
}
#endif // Quadrilatere_h
