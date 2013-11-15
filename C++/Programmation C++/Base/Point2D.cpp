/**
*       @Author Clin Matthieu
*       @Author Vecchio Quentin
*
*       @version 1.0.0.0 on 2013-11-15
*/
#include "Point2D.h"

using namespace std;

Point2D::Point2D()
{
	this->x = 0;
	this->y = 0;
}

Point2D::Point2D(float x, float y)
{
	this->x = x;
	this->y = y;
}

float Point2D::getX()
{
	return this->x;
}

float Point2D::getY()
{
	return this->y;
}

void Point2D::setX(float x)
{
	this->x = x;
}
 
void Point2D::setY(float y)
{
	this->y = y;
}

void Point2D::translation(Point2D t){
	this->x += t.getX();
	this->y += t.getY();
}

void Point2D::translation(float x, float y){
	this->x += x;
	this->y += y;
}


bool Point2D::estIdentique(Point2D pofloat)
{
	return this->x == pofloat.x && this->y == pofloat.y;
}

void Point2D::affiche(ostream& flux) const
{
	flux << "(" << this->x << "," << this->y << ")" << endl;
}

ostream& operator <<(ostream& flux, const Point2D& p)
{
	p.affiche(flux);
	return flux;
}

