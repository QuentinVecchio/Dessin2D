/**
*       @Author Clin Matthieu
*       @Author Vecchio Quentin
*
*       @version 1.0.0.0 on 2013-11-15
*/
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

void Cercle::affiche(ostream& flux) const
{
	cout << "centre: " <<this->A;
	cout << "rayon : "<< this->rayon << endl;
}

void Cercle::translation(Point2D point)
{
	Figure::translation(point);
}

ostream& operator <<(ostream& flux, const Cercle& c)
{
	c.affiche(flux);
	return flux;
}

