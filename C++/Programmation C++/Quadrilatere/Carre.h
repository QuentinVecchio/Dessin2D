#ifndef Carre_h
#define Carre_h

#include "Parallelogramme.h"
#include "../Base/Point2D.h"
#include "../Base/Segment.h"

using namespace std;

class Carre : public Parallelogramme {

 public:

    Carre(Point2D A, Point2D B, Point2D C, Point2D D);

    bool estCarre();
};

#endif // Carre_h
