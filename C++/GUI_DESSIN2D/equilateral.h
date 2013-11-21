#ifndef Equilateral_h
#define Equilateral_h

#include "point2D.h"
#include "segment.h"
#include "triangle.h"

using namespace std;
class Equilateral : public Triangle {

 public:

    Equilateral(Point2D A, Point2D B, Point2D C);

    Equilateral(Segment base, Point2D point);

    bool estEquilateral();
};

#endif // Equilateral_h
