#ifndef Quadrangle_h
#define Quadrangle_h

#include "Point2D.h"
#include "Quadrilatere.h"


class Quadrangle : public Quadrilatere {

 public:

    virtual void Quadrangle();

    virtual void Quadrangle(Point2D A, Point2D B, Point2D C, Point2D D);

    virtual Boolean estQuadrangle();
};

#endif // Quadrangle_h
