#include "Rectangle.h"

Rectangle::Rectangle(Point2D A, Point2D B, Point2D C, Point2D D) : Parallelogramme(A,B,C,D)
{
}

bool Rectangle::estRectangle()
{
    return false;
}
