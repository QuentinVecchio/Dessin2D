/**
*	@Author Clin Matthieu
*	@Author Vecchio Quentin
*
*	@version 1.0.0.0 on 2013-11-15
*/
#ifndef Triangle_h
#define Triangle_h

#include "../Base/Point2D.h"
#include "../Base/Segment.h"
#include <iostream>
#include <ostream>

using namespace std;
class Triangle : public Segment {

 public:


	/**
	*	Constructeur
	*	@params Point2D A, le point A du triangle
	*	@params Point2D B, le point B du triangle
	*	@params Point2D C, le point C du triangle
	*/
    Triangle(Point2D A, Point2D B, Point2D C);

	/**
	*	Constructeur
	*	@params Segment base, le segment base du triangle
	*	@params Point2D C, le point C du triangle
	*/
    Triangle(Segment base, Point2D C);

	/**
	*	Getter et Setter du point C
	*/
    Point2D getC();

    void setC(Point2D C);

    void affiche(ostream& flux) const;

    void translation(Point2D point);

	/**
	*	Fonction qui test si le triangle est plat
	*	@return true, si il est plat
	*	@return false, sinon
	*/
    bool estPlat();

 protected:
    Point2D C;
};

#endif // Triangle_h
