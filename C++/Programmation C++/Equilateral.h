#ifndef Equilateral_h
#define Equilateral_h

#include "Point2D.h"
#include "Segment.h"
#include "Triangle.h"


class Equilateral : public Triangle {

 public:

    virtual void Equilateral();

    virtual void Equilateral(Point2D A, Point2D B, Point2D C);

    virtual void Equilateral(Segment base, Point2D point);

    virtual Boolean estEquilateral();
};

#endif // Equilateral_h
