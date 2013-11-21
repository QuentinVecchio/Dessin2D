#include "losange.h"

Losange::Losange(Point2D A, Point2D B, Point2D C, Point2D D) : Parallelogramme(A,B,C,D)
{
}


bool Losange::estLosange()
{
    Segment s1(A,B);
    Segment s2(B,C);
    Segment s3(C,D);
    Segment s4(D,A);

   return s1.estParallele(s3) && s1.longueur() == s2.longueur();
}
