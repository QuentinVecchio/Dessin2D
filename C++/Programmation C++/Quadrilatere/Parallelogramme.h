#ifndef Parallelogramme_h
#define Parallelogramme_h

#include "../Base/Point2D.h"
#include "Quadrilatere.h"
#include "../Base/Segment.h"

using namespace std;
class Parallelogramme : public Quadrilatere {

 public:

    Parallelogramme(Point2D A, Point2D B, Point2D C, Point2D D);

    //Parallelogramme(Segment segmentLong, Segment segmentLar);

    bool estParallelogramme();
};

#endif // Parallelogramme_h
