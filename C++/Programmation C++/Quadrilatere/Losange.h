#ifndef Losange_h
#define Losange_h

#include "Parallelogramme.h"
#include "../Base/Point2D.h"
#include "../Base/Segment.h"

using namespace std;
class Losange : public Parallelogramme {

 public:

    Losange(Point2D A, Point2D B, Point2D C, Point2D D);

    bool estLosange();
};

#endif // Losange_h
