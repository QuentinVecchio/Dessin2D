#ifndef Isocele_h
#define Isocele_h

#include "Point2D.h"
#include "Segment.h"
#include "Triangle.h"


class Isocele : public Triangle {

 public:

    virtual void Isocele();

    virtual void Isocele(Point2D A, Point2D B, Point2D C);

    virtual void Isocele(Segment base, Point2D point);

    virtual Boolean estIsocele();
};

#endif // Isocele_h
