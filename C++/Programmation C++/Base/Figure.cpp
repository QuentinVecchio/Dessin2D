#include "Figure.h"

Figure::Figure()
{
	this->A = Point2D();
}

Figure::Figure(int x, int y)
{
	this->A = Point2D(x,y);
}

Figure::Figure(Point2D point)
{
	this->A = point;
}

void Figure::translation(Point2D point)
{
	this->A.translation(point);
}

void Figure::affiche(ostream& flux) const
{
	this->A.affiche(flux);
}

Point2D Figure::getA()
{
	return this->A;
}

void Figure::setA(Point2D A)
{
	this->A = A;
}

ostream& operator <<(ostream& flux, const Figure& p)
{
	p.affiche(flux);
	return flux;
}

