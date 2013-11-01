#include "Equilateral.h"

Equilateral::Equilateral(Point2D A, Point2D B, Point2D C) : Triangle(A,B,C)
{
}

Equilateral::Equilateral(Segment base, Point2D point) : Triangle(base,point)
{
}

bool Equilateral::estEquilateral()
{
	Segment s1(A,B);
	Segment s2(A,C);
	Segment s3(B,C);

   return s1.longueur() == s2.longueur() && s3.longueur() == s2.longueur();
}
