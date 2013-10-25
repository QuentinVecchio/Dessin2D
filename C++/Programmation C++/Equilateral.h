#ifndef Equilateral_h
#define Equilateral_h

#include "Point2D.h"
#include "Segment.h"
#include "Triangle.h"

using namespace std;
class Equilateral : public Triangle {

 public:

    Equilateral(Point2D A, Point2D B, Point2D C);

    Equilateral(Segment base, Point2D point);

    bool estEquilateral();
};

#endif // Equilateral_h
