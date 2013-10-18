#ifndef Losange_h
#define Losange_h

#include "Parallelogramme.h"
#include "Point2D.h"
#include "Segment.h"


class Losange : public Parallelogramme {

 public:

    virtual void Losange();

    virtual void Losange(Point2D A, Point2D B, Point2D C, Point2D D);

    virtual void Losange(Segment segmentLong, Segment segmentLar);

    virtual Boolean estLosange();
};

#endif // Losange_h
