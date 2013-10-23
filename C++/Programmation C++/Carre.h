#ifndef Carre_h
#define Carre_h

#include "Parallelogramme.h"
#include "Point2D.h"
#include "Segment.h"


class Carre : public Parallelogramme {

 public:

    void Carre();

    void Carre(Point2D A, Point2D B, Point2D C, Point2D D);

    void Carre(Segment segment);

    bool estCarre();
};

#endif // Carre_h
