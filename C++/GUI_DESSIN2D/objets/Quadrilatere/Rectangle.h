/**
*	@Author Clin Matthieu
*	@Author Vecchio Quentin
*
*	@version 1.0.0.0 on 2013-11-15
*/
#ifndef Rectangle_h
#define Rectangle_h

#include "Parallelogramme.h"
#include "../Base/Point2D.h"
#include "../Base/Segment.h"

using namespace std;
class Rectangle : public Parallelogramme {

 public:
	/**
	*	Constructeur de la class Rectangle
	*	@params Point2D A, le point A du Rectangle
	*	@params Point2D B, le point B du Rectangle
	*	@params Point2D C, le point C du Rectangle
	*	@params Point2D D, le point D du Rectangle
	*/
    Rectangle(Point2D A, Point2D B, Point2D C, Point2D D);

	/**
	*	Fonction qui test si les points données correspondent à un rectangle
	*	@return true, si c'est un rectangle
	*	@return false, sinon
	*/
    bool estRectangle();
};

#endif // Rectangle_h
