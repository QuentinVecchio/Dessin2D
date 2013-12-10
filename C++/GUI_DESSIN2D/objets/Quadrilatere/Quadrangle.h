/**
*	@Author Clin Matthieu
*	@Author Vecchio Quentin
*
*	@version 1.0.0.0 on 2013-11-15
*/
#ifndef Quadrangle_h
#define Quadrangle_h

#include "../Base/Point2D.h"
#include "Quadrilatere.h"

using namespace std;

class Quadrangle : public Quadrilatere {

 public:
	/**
	*	Constructeur de la class Quadrangle
	*	@params Point2D A, le point A du Quadrangle
	*	@params Point2D B, le point B du Quadrangle
	*	@params Point2D C, le point C du Quadrangle
	*	@params Point2D D, le point D du Quadrangle
	*/
    Quadrangle(Point2D A, Point2D B, Point2D C, Point2D D);
};

#endif // Quadrangle_h
