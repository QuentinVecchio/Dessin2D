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

void Segment::affiche(ostream& flux)
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
    return false;
}

bool Segment::estParallele(Segment segment)
{
	Point2D v1( this->A.getX() - this->B.getX(), 
					this->A.getY() - this->B.getY());

	Point2D v2( segment.getA().getX() - segment.getB().getX(), 
					segment.getA().getY() - segment.getB().getY());
	

	if(v1.getX() > v2.getX()){
		//cout << "valeur" << v1.getX()% v2.getX() <<endl;
		//return v1.getX()% v2.getX() == 0 && v1.getY()% v2.getY() == 0;
	}else{
		//cout << "valeur" << v1.getY()% v2.getY() <<endl;
		//return v1.getY()% v2.getY() == 0 && v1.getX()% v2.getX() == 0;
	}


	return false;
}

bool Segment::seCoupe(Segment segment)
{
    return false;
}

