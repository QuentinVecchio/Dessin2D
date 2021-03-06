/**
*	@Author Clin Matthieu
*	@Author Vecchio Quentin
*
*	@version 1.0.0.0 on 2013-11-15
*/
#include "Figure.h"

Figure::Figure()
{
	this->A = Point2D();
}

Figure::Figure(float x, float y)
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

