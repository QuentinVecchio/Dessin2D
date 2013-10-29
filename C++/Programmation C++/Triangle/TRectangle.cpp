#include "TRectangle.h"

TRectangle::TRectangle(Point2D A, Point2D B, Point2D C) : Triangle(A,B,C)
{
}

TRectangle::TRectangle(Segment base, Point2D point ) : Triangle(base,point)
{
}

bool TRectangle::estTRectangle()
{
    return false;
}
