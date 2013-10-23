#include "Cercle.h"


Cercle::Cercle()
{
	this->A = Point2D(2,2);
	this->rayon = 1;
}

Cercle::Cercle(Point2D point):Figure(point)
{
	this->rayon = 1;
}

Cercle::Cercle(Point2D point, int rayon):Figure(point)
{
	this->rayon = rayon;
}

int Cercle::getRayon()
{
	return this->rayon;
}

void Cercle::setRayon(int rayon)
{
	this->rayon = rayon;
}

void Cercle::affiche()
{
}

void Cercle::translation(Point2D point)
{
	Figure:translation(point);
}

