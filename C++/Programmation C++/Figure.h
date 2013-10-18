#ifndef Figure_h
#define Figure_h

#include "Point2D.h"


class Figure {

 public:

    virtual void Figure();

    virtual void Figure(Integer x, Integer y);

    virtual void Figure(Point2D point);

    virtual void translation(Point2D point);

    virtual void affiche();

    virtual Point2D getA();

    virtual void setA(Point2D A);

 public:
    Point2D A;

 public:

    /**
     * @element-type Point2D
     */
    Point2D *utilise;
};

#endif // Figure_h
