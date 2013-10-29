#ifndef Quadrangle_h
#define Quadrangle_h

#include "../Base/Point2D.h"
#include "Quadrilatere.h"

using namespace std;

class Quadrangle : public Quadrilatere {

 public:

    Quadrangle(Point2D A, Point2D B, Point2D C, Point2D D);

    bool estQuadrangle();
};

#endif // Quadrangle_h
