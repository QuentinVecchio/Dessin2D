#ifndef Rectangle_h
#define Rectangle_h

#include "Parallelogramme.h"
#include "Point2D.h"
#include "Segment.h"

using namespace std;
class Rectangle : public Parallelogramme {

 public:

    Rectangle(Point2D A, Point2D B, Point2D C, Point2D D);

    //Rectangle(Segment segmentLong, Segment segmentLar);

    bool estRectangle();
};

#endif // Rectangle_h
