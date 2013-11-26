/**
*	@Author Clin Matthieu
*	@Author Vecchio Quentin
*
*	@version 1.0.0.0 on 2013-11-15
*/
#ifndef Carre_h
#define Carre_h

#include "Parallelogramme.h"
#include "../Base/Point2D.h"
#include "../Base/Segment.h"

using namespace std;

class Carre : public Parallelogramme {

 public:

	Carre();

	/**
	*	Constructeur de la class Carre
	*	@params Point2D A, le point A du carré
	*	@params Point2D B, le point B du carré
	*	@params Point2D C, le point C du carré
	*	@params Point2D D, le point D du carré
	*
	*/
    Carre(Point2D A, Point2D B, Point2D C, Point2D D);

	/**
	*	Fonction de test pour savoir si les coordonnées des points correspondent à un carré
	*	@return bool, true si c'est un carré
	*	@return bool, false sinon
	*/
    bool estCarre();
};

#endif // Carre_h
