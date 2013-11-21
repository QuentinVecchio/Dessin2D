#ifndef Rectangle_h
#define Rectangle_h

#include "parallelogramme.h"
#include "point2D.h"
#include "segment.h"

using namespace std;
class Rectangle : public Parallelogramme {

 public:

    Rectangle(Point2D A, Point2D B, Point2D C, Point2D D);

    bool estRectangle();
};

#endif // Rectangle_h
