#include "Carre.h"

Carre::Carre(Point2D A, Point2D B, Point2D C, Point2D D) : Parallelogramme(A,B,C,D)
{
}

bool Carre::estCarre()
{
    return false;
}
