#include "Segment.h"

Segment::Segment(Point2D A, Point2D B):Figure(A),B(B)
{
}

Point2D Segment::getB()
{
	return this->B;
}

void Segment::setB(Point2D B)
{
	this->B = B;
}

void Segment::affiche(ostream& flux) const
{
	Figure::affiche(flux);
	this->B.affiche(flux);
}

void Segment::translation(Point2D point)
{
	Figure::translation(point);
	this->B.translation(point);
}

bool Segment::estPerpendiculaire(Segment segment)
{
	Point2D v1( this->A.getX() - this->B.getX(), 
					this->A.getY() - this->B.getY());

	Point2D v2( segment.getA().getX() - segment.getB().getX(), 
					segment.getA().getY() - segment.getB().getY());
	
	return v1.getX() * v2.getX() + v2.getY() * v1.getY() == 0;
}

bool Segment::estParallele(Segment segment)
{
	Point2D v1( this->A.getX() - this->B.getX(), 
					this->A.getY() - this->B.getY());

	Point2D v2( segment.getA().getX() - segment.getB().getX(), 
					segment.getA().getY() - segment.getB().getY());
	
	return v1.getX() * v2.getY() == v2.getX() * v1.getY();
}

bool Segment::seCoupe(Segment segment)
{
    return false;
}

ostream& operator <<(ostream& flux, const Segment& s)
{
	s.affiche(flux);
	return flux;
}

float longueur(){
	return 0.0;
}

