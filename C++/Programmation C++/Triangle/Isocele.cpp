#include "Isocele.h"

Isocele::Isocele(Point2D A, Point2D B, Point2D C) : Triangle(A,B,C)
{
}

Isocele::Isocele(Segment base, Point2D point) : Triangle(base,point)
{
}

bool Isocele::estIsocele()
{
	Segment s1(A,B);
	Segment s2(A,C);
	Segment s3(B,C);

   return s1.longueur() == s2.longueur() || s1.longueur() == s3.longueur() || s2.longueur() == s3.longueur();
}
