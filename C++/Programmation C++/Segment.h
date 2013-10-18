#ifndef Segment_h
#define Segment_h

#include "Figure.h"
#include "Point2D.h"
#include "Segment.h"


class Segment : public Figure {

 public:

    virtual void Segment();

    virtual void Segment(Point2D A);

    virtual void Segment(Point2D A, Point2D B);

    virtual Point2D getB();

    virtual void setB()(Point2D B);

    virtual void affiche();

    virtual void translation(Point2D point);

    virtual Boolean estPerpendiculaire(Segment segment);

    virtual Boolean estParallele(Segment segment);

    virtual Boolean seCoupe(Segment segment);

 public:
    Point2D B;
};

#endif // Segment_h
