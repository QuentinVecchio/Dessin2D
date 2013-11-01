#include "Parallelogramme.h"

Parallelogramme::Parallelogramme(Point2D A, Point2D B, Point2D C, Point2D D) : Quadrilatere(A,B,C,D)
{
}

bool Parallelogramme::estParallelogramme()
{
    return false;
}
