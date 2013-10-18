#ifndef Triangle_h
#define Triangle_h

#include "Point2D.h"
#include "Segment.h"


class Triangle : public Segment {

 public:

    virtual void Triangle();

    virtual void Triangle(Point2D A, Point2D B, Point2D C);

    virtual void Triangle(Segment base, Point2D point);

    virtual Point2D getC();

    virtual void setC(Point2D C);

    virtual void affiche();

    virtual void translation(Point2D point);

    virtual Boolean estPlat();

 public:
    Point2D C;
};

#endif // Triangle_h
