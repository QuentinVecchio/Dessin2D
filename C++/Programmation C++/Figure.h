#ifndef Figure_h
#define Figure_h

#include "Point2D.h"


class Figure {

 protected:
    Point2D A;

 public:

    Figure();

    Figure(int x, int y);

    Figure(Point2D point);

    virtual void translation(Point2D point);

    virtual void affiche();

    Point2D getA();

    void setA(Point2D A);

};

#endif // Figure_h
