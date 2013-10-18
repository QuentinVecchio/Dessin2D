#ifndef TRectangle_h
#define TRectangle_h

#include "Point2D.h"
#include "Segment.h"
#include "Triangle.h"


class TRectangle : public Triangle {

 public:

    virtual void TRectangle();

    virtual void TRectangle(Point2D A, Point2D B, Point2D C);

    virtual void TRectangle(Segment base, Point2D point );

    virtual Boolean estTRectangle();
};

#endif // TRectangle_h
