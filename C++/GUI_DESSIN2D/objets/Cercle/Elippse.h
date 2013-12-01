/**
*	Classe Elippse. Modélise une Elippse dans un environnement 2D
*       @Author Clin Matthieu
*       @Author Vecchio Quentin
*
*       @version 1.0.0.0 on 2013-11-15
*/
#ifndef Elippse_h
#define Elippse_h

#include "../Base/Figure.h"
#include "../Base/Point2D.h"
#include "Cercle.h"

using namespace std;

class Elippse : public Cercle {
 private :
 	Point2D point2;
 public:

	/**
	*	Constructeur par défaut d'Elippse
	*	Point d'origine (2,2) et rayon 1
	*/
    Elippse();

	/**
	*	Constructeur avec le centre du cercle et un rayon par défaut de 1
	*	@params Point2D point, l'origine du cercle
	*/
    Elippse(Point2D point1,Point2D point2);

	/**
	*	Constructeur avec le centre du cercle et le rayon
	*	@params Point2D point, le point d'origine du cercle
	*	@params int rayon, le rayon du cercle
	*/
    Elippse(Point2D point1,Point2D point2, int rayon);

	/**
	*	Getter et Setter du point 2
	*/
	Point2D getPoint2();
	void setPoint2(Point2D point);

    void affiche(ostream& flux) const;

	/**
	*	Translation de l'ellipse
	*/
    void translation(Point2D point);

	friend ostream& operator <<(ostream& flux, const Elippse& c);

};

#endif // Cercle_h
