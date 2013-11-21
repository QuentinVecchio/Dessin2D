/**
*	@Author Clin Matthieu
*	@Author Vecchio Quentin
*
*	@version 1.0.0.0 on 2013-11-15
*/
#ifndef Parallelogramme_h
#define Parallelogramme_h

#include "../Base/Point2D.h"
#include "Quadrilatere.h"
#include "../Base/Segment.h"

using namespace std;
class Parallelogramme : public Quadrilatere {

 public:

	Parallelogramme();

	/**
	*	Constructeur de la class Parallelogramme
	*	@params Point2D A, le point A du parallélogramme
	*	@params Point2D B, le point B du parallélogramme
	*	@params Point2D C, le point C du parallélogramme
	*	@params Point2D D, le point D du parallélogramme
	*/
    Parallelogramme(Point2D A, Point2D B, Point2D C, Point2D D);

	/**
	*	Fonction qui test si les points correspondent à un parallelogramme
	*	@return true, si c'est un parallélogramme
	*	@return false, sinon
	*/
    bool estParallelogramme();
};

#endif // Parallelogramme_h
