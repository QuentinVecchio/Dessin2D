/**
*	@Author Clin Matthieu
*	@Author Vecchio Quentin
*
*	@version 1.0.0.0 on 2013-11-15
*/
#ifndef Quadrilatere_h
#define Quadrilatere_h

#include "../Base/Point2D.h"
#include "../Base/Segment.h"
#include <iostream>
#include <ostream>
using namespace std;

class Quadrilatere : public Segment {

 public:

	Quadrilatere();

	/**
	*	Constructeur de la class quadrilatère
	*	@params Point2D A, le point A du quadrilatère
	*	@params Point2D B, le point B du quadrilatère
	*	@params Point2D C, le point C du quadrilatère
	*	@params Point2D D, le point D du quadrilatère
	*/
    Quadrilatere(Point2D A, Point2D B, Point2D C, Point2D D);

	/**
	*	Getters et Setters des points C et D
	*/
    Point2D getC();

    Point2D getD();

    void setC(Point2D C);
    
    void setD(Point2D D);
    
    void affiche(ostream& flux) const;

    void translation(Point2D point);

 protected:
    Point2D C;
    Point2D D;
};

#endif // Quadrilatere_h
