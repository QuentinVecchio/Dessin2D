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
}

void Figure::affiche()
{
}

Point2D Figure::getA()
{
}

void Figure::setA(Point2D A)
{
}

