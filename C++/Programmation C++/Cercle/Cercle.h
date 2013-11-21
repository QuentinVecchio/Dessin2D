/**
*	Classe Cercle. Modélise un cercle dans un environnement 2D
*       @Author Clin Matthieu
*       @Author Vecchio Quentin
*
*       @version 1.0.0.0 on 2013-11-15
*/
#ifndef Cercle_h
#define Cercle_h

#include "../Base/Figure.h"
#include "../Base/Point2D.h"

using namespace std;

class Cercle : public Figure {


 protected:
    int rayon;


 public:

	/**
	*	Constructeur par défaut de cercle
	*	Point d'origine (2,2) et rayon 1
	*/
    Cercle();

	/**
	*	Constructeur avec le centre du cercle et un rayon par défaut de 1
	*	@params Point2D point, l'origine du cercle
	*/
    Cercle(Point2D point);

	/**
	*	Constructeur avec le centre du cercle et le rayon
	*	@params Point2D point, le point d'origine du cercle
	*	@params int rayon, le rayon du cercle
	*/
    Cercle(Point2D point, int rayon);

	/**
	*	Getter et Setter du rayon
	*/
    int getRayon();

    void setRayon(int rayon);

	/**
	*	Fonction d'affichage du cercle dans un terminal
	*/
    void affiche(ostream& flux) const;

	/**
	*	Translation du cercle
	*/
    void translation(Point2D point);

	friend ostream& operator <<(ostream& flux, const Cercle& c);

};

#endif // Cercle_h
