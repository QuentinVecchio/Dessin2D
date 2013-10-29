#include "Quadrilatere.h"

Quadrilatere::Quadrilatere(Point2D A, Point2D B, Point2D C, Point2D D) : Segment(A,B), C(C), D(D)
{
}

Point2D Quadrilatere::getC()
{
    return this->C;
}

Point2D Quadrilatere::getD()
{
    return this->D;
}

void Quadrilatere::setC(Point2D C)
{
    this->C = C;
}

void Quadrilatere::setD(Point2D D)
{
    this->D = D;
}

void Quadrilatere::affiche(ostream& flux)
{
    Segment::affiche(flux);
    this->C.affiche(flux);
    this->D.affiche(flux);
}

void Quadrilatere::translation(Point2D point)
{
    Segment::translation(point);
	this->C.translation(point);
    this->D.translation(point);
}

