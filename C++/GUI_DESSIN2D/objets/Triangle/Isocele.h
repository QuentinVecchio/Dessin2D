/**
*	@Author Clin Matthieu
*	@Author Vecchio Quentin
*
*	@version 1.0.0.0 on 2013-11-15
*/
#ifndef Isocele_h
#define Isocele_h

#include "../Base/Point2D.h"
#include "../Base/Segment.h"
#include "Triangle.h"

using namespace std;
class Isocele : public Triangle {

 public:

	/**
	*	Constructeur
	*	@params Point2D A, le point A
	*	@params Point2D B, le point B
	*	@params Point2D C, le point C
	*/
    Isocele(Point2D A, Point2D B, Point2D C);

	/**
	*	Constructeur
	*	@params Semgnet base, la base du triangle
	*	@params Point2D point, le point C
	*/
    Isocele(Segment base, Point2D point);

	/**
	*	Fonction qui test si le triangle est isocèle
	*	@return true, si il est isocele
	*	@return false, sinon
	*/
    bool estIsocele();
};

#endif // Isocele_h
