/**
*	@Author Clin Matthieu
*	@Author Vecchio Quentin
*
*	@version 1.0.0.0 on 2013-11-15
*/
#ifndef Equilateral_h
#define Equilateral_h

#include "../Base/Point2D.h"
#include "../Base/Segment.h"
#include "Triangle.h"

using namespace std;
class Equilateral : public Triangle {

 public:

	/**
	*	Constructeur
	*	@params Point2D A, le point A
	*	@params Point2D B, le point B
	*	@params Point2D C, le point C
	*/
    Equilateral(Point2D A, Point2D B, Point2D C);

	/**
	*	Constructeur
	*	@params Segment base, la base du triangle
	*	@params Point2D point, le point C du triangle
	*/
    Equilateral(Segment base, Point2D point);

	/**
	*	Fonction qui test si le triangle est équilatéral
	*	@return true, si il est équilatéral
	*	@return false, sinon
	*/
    bool estEquilateral();
};

#endif // Equilateral_h
