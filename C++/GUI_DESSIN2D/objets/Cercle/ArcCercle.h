/**
*       @Author Clin Matthieu
*       @Author Vecchio Quentin
*
*       @version 1.0.0.0 on 2013-11-15
*/
#ifndef ArcCercle_h
#define ArcCercle_h

#include "Cercle.h"


class ArcCercle : public Cercle {

private:
	float angle;
	Point2D pointDepart;
public:

	/**
	* Constructeur de la class ArcCercle
	*	@params Cercle cercle, le cercle où se situe l'arc de cercle
	*	@params float angle, l'angle à partir du point 
	*	@params Point2ED pointDepart, le point de départ de l'arc de cercle
	*/
	ArcCercle(Cercle cercle, float angle ,Point2D pointDepart);

	/**
	*	Les getters et setters de l'angle et du point de départ
	*/
	float getAngle();

	Point2D getPointDepart();

	void setAngle(float angleA);
	
	void setPointDepart(Point2D pointDepart);


};

#endif // ArcCercle_h
