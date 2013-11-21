#include "rectangle.h"

Rectangle::Rectangle(Point2D A, Point2D B, Point2D C, Point2D D) : Parallelogramme(A,B,C,D)
{
}

bool Rectangle::estRectangle()
{
    Segment s1(A,B);
    Segment s2(B,C);
    Segment s3(C,D);
    Segment s4(D,A);

   return estParallelogramme() && s1.longueur() == s3.longueur() && s1.estPerpendiculaire(s2);
}
