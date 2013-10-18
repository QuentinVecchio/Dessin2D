#ifndef Parallelogramme_h
#define Parallelogramme_h

#include "Point2D.h"
#include "Quadrilatere.h"
#include "Segment.h"


class Parallelogramme : public Quadrilatere {

 public:

    virtual void Parallelogramme();

    virtual void Parallelogramme(Point2D A, Point2D B, Point2D C, Point2D D);

    virtual void Parallelogramme(Segment segmentLong, Segment segmentLar);

    virtual Boolean estParallelogramme();
};

#endif // Parallelogramme_h
