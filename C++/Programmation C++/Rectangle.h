#ifndef Rectangle_h
#define Rectangle_h

#include "Parallelogramme.h"
#include "Point2D.h"
#include "Segment.h"


class Rectangle : public Parallelogramme {

 public:

    virtual void Rectangle();

    virtual void Rectangle(Point2D A, Point2D B, Point2D C, Point2D D);

    virtual void Rectangle(Segment segmentLong, Segment segmentLar);

    virtual Boolean estRectangle();
};

#endif // Rectangle_h
