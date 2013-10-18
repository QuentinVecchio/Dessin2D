#ifndef Carre_h
#define Carre_h

#include "Parallelogramme.h"
#include "Point2D.h"
#include "Segment.h"


class Carre : public Parallelogramme {

 public:

    virtual void Carre();

    virtual void Carre(Point2D A, Point2D B, Point2D C, Point2D D);

    virtual void Carre(Segment segment);

    virtual Boolean estCarre();
};

#endif // Carre_h
