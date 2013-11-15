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

	ArcCercle(Cercle cercle, float angle ,Point2D pointDepart);

	float getAngle();

	Point2D getPointDepart();

	void setAngle(float angleA);
	
	void setPointDepart(Point2D pointDepart);


};

#endif // ArcCercle_h
