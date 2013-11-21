#include "Carre.h"

Carre::Carre(Point2D A, Point2D B, Point2D C, Point2D D) : Parallelogramme(A,B,C,D)
{
}

bool Carre::estCarre()
{
    Segment s1(A,B);
    Segment s2(B,C);
    Segment s3(C,D);
    Segment s4(D,A);

   return estParallelogramme() && s1.longueur() == s2.longueur() && s1.estPerpendiculaire(s2);
}
