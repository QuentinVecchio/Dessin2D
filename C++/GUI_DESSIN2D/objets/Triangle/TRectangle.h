/**
*	@Author Clin Matthieu
*	@Author Vecchio Quentin
*
*	@version 1.0.0.0 on 2013-11-15
*/
#ifndef TRectangle_h
#define TRectangle_h

#include "../Base/Point2D.h"
#include "../Base/Segment.h"
#include "Triangle.h"

using namespace std;
class TRectangle : public Triangle {

 public:

	/**
	*	Construction
	*	@params Point2D A, le point A
	*	@params Point2D B, le point B
	*	@params Point2D C, le point C
	*/
    TRectangle(Point2D A, Point2D B, Point2D C);

	/**
	*	Constructeur
	*	@params Segment base, le segment de base
	*	@params Point2D point, le point C du triangle
	*/
    TRectangle(Segment base, Point2D point );

	/**
	*	Fonction qui test si le triangle est rectangle
	*	@return true, si il est rectangle
	*	@return false, sinon
	*/
    bool estTRectangle();
};

#endif // TRectangle_h
