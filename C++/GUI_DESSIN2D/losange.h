#ifndef Losange_h
#define Losange_h

#include "parallelogramme.h"
#include "point2D.h"
#include "segment.h"

using namespace std;
class Losange : public Parallelogramme {

 public:

    Losange(Point2D A, Point2D B, Point2D C, Point2D D);

    bool estLosange();
};

#endif // Losange_h
