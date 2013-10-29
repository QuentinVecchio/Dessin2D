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

    virtual void affiche(ostream& flux) const;

    Point2D getA();

    void setA(Point2D A);

	friend ostream& operator <<(ostream& flux, const Figure& p);

};

#endif // Figure_h
