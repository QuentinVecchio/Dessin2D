#include "Isocele.h"

Isocele::Isocele(Point2D A, Point2D B, Point2D C) : Triangle(A,B,C)
{
}

Isocele::Isocele(Segment base, Point2D point) : Triangle(base,point)
{
}

bool Isocele::estIsocele()
{
    return false;
}
