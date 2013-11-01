#include "TRectangle.h"

TRectangle::TRectangle(Point2D A, Point2D B, Point2D C) : Triangle(A,B,C)
{
}

TRectangle::TRectangle(Segment base, Point2D point ) : Triangle(base,point)
{
}

bool TRectangle::estTRectangle()
{
	Segment s1(A,B);
	Segment s2(A,C);
	Segment s3(B,C);
	return s1.estPerpendiculaire(s2) || s1.estPerpendiculaire(s3) || s2.estPerpendiculaire(s3);
}
