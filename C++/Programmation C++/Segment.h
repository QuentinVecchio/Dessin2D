#ifndef Segment_h
#define Segment_h

#include "Figure.h"
#include "Point2D.h"
#include "Segment.h"


class Segment : public Figure {

 private:
    Point2D B;

 public:

    Segment(Point2D A, Point2D B);

    virtual Point2D getB();

    virtual void setB(Point2D B);

    virtual void affiche();

    virtual void translation(Point2D point);

    virtual bool estPerpendiculaire(Segment segment);

    virtual bool estParallele(Segment segment);

    virtual bool seCoupe(Segment segment);
};

#endif // Segment_h
