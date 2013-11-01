#include "Losange.h"

Losange::Losange(Point2D A, Point2D B, Point2D C, Point2D D) : Parallelogramme(A,B,C,D)
{
}


bool Losange::estLosange()
{
    return false;
}
