#ifndef Isocele_h
#define Isocele_h

#include "Point2D.h"
#include "Segment.h"
#include "Triangle.h"

using namespace std;
class Isocele : public Triangle {

 public:

    Isocele(Point2D A, Point2D B, Point2D C);

    Isocele(Segment base, Point2D point);

    bool estIsocele();
};

#endif // Isocele_h
