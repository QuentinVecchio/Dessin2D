/**
*	@Author Clin Matthieu
*	@Author Vecchio Quentin
*
*	@version 1.0.0.0 on 2013-11-15
*/
#ifndef Losange_h
#define Losange_h

#include "Parallelogramme.h"
#include "../Base/Point2D.h"
#include "../Base/Segment.h"

using namespace std;
class Losange : public Parallelogramme {

 public:

	/**
	*	Constructeur de la class Losange
	*	@params Point2D A, le point A du losange
	*	@params Point2D B, le point B du losange
	*	@params Point2D C, le point C du losange
	*	@params Point2D D, le point D du losange
	*/
    Losange(Point2D A, Point2D B, Point2D C, Point2D D);

	/**
	*	Fonction qui test si les points données correspondent à un losange
	*	@return true, si c'est un losange
	*	@return false, sinon
	*/
    bool estLosange();
};

#endif // Losange_h
