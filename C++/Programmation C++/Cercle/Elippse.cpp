/**
*       @Author Clin Matthieu
*       @Author Vecchio Quentin
*
*       @version 1.0.0.0 on 2013-11-15
*/
#include "Elippse.h"


Elippse::Elippse()
{
	this->A = Point2D(2,2);
	this->rayon = 1;
}

Elippse::Elippse(Point2D point1,Point2D point2): Cercle(point1), point2(point2)
{
	this->rayon = 1;
}

Elippse::Elippse(Point2D point1,Point2D point2, int rayon):Cercle(point1,rayon), point2(point2)
{
}

Point2D Elippse::getPoint2()
{
	return this->point2;
}

void Elippse::setPoint2(Point2D point)
{
	this->point2 = point;
}

void Elippse::affiche(ostream& flux) const
{
	cout << "Point 1 : " << this->A;
    cout << "Point 2 : " << this->point2;
	cout << "rayon : "<< this->rayon << endl;
}

void Elippse::translation(Point2D point)
{
	Cercle::translation(point);
}

ostream& operator <<(ostream& flux, const Elippse& e)
{
	e.affiche(flux);
	return flux;
}

