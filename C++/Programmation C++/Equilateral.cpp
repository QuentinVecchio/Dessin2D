#include "Equilateral.h"

Equilateral::Equilateral(Point2D A, Point2D B, Point2D C) : Triangle(A,B,C)
{
}

Equilateral::Equilateral(Segment base, Point2D point) : Triangle(base,point)
{
}

bool Equilateral::estEquilateral()
{
    return false;
}
