#include "Triangle.h"

using namespace std;
Triangle::Triangle(Point2D A, Point2D B, Point2D C) : Segment(A,B),C(C)
{
}

Triangle::Triangle(Segment base, Point2D C) : Segment(base),C(C)
{
}

Point2D Triangle::getC()
{
	return this->C;
}

void Triangle::setC(Point2D C)
{
	this->C = C;
}

void Triangle::affiche(ostream& flux) const
{
	Segment::affiche(flux);
	this->C.affiche(flux);
}

void Triangle::translation(Point2D point)
{
	Segment::translation(point);
	this->C.translation(point);
}

bool Triangle::estPlat()
{
	if((this->A.getX() == this->B.getX() && this->B.getX() == this->C.getX()) || (this->A.getY() == this->B.getY() && this->B.getY() == this->C.getY()))
	{
		return true;
	}
	return false;
}

ostream& operator <<(ostream& flux, const Triangle& t)
{
	t.affiche(flux);
	return flux;
}

