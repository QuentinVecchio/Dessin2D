#ifndef Parallelogramme_h
#define Parallelogramme_h

#include "point2D.h"
#include "quadrilatere.h"
#include "segment.h"

using namespace std;
class Parallelogramme : public Quadrilatere {

 public:

    Parallelogramme(Point2D A, Point2D B, Point2D C, Point2D D);

    bool estParallelogramme();
};

#endif // Parallelogramme_h
