#ifndef Carre_h
#define Carre_h

#include "parallelogramme.h"
#include "point2D.h"
#include "segment.h"

using namespace std;

class Carre : public Parallelogramme {

 public:

    Carre(Point2D A, Point2D B, Point2D C, Point2D D);

    bool estCarre();
};

#endif // Carre_h
