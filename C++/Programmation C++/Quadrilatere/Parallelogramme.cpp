#include "Parallelogramme.h"

Parallelogramme::Parallelogramme(){}

Parallelogramme::Parallelogramme(Point2D A, Point2D B, Point2D C, Point2D D) : Quadrilatere(A,B,C,D)
{
}

bool Parallelogramme::estParallelogramme()
{
	Segment s1(A,B);
	Segment s2(B,C);
	Segment s3(C,D);
	Segment s4(D,A);

	return s1.estParallele(s3) && s2.estParallele(s4);

}
