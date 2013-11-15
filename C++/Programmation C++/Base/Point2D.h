/**
*	Classe Point2D. Cette classe modélise un pofloat positionné dans un environnement 2D
*
*
*       @Author Clin Matthieu
*       @Author Vecchio Quentin
*
*       @version 1.0.0.0 on 2013-11-15
*/
#ifndef Point2D_h
#define Point2D_h

#include <iostream>
#include <ostream>

using namespace std;
class Point2D {

 public:

	/**
	*	Constructeur sans paramètre.
	*	Instancie un Point2D de coordonnée (0.0,0.0)
	*/
   Point2D();

	/**
	*	Constructeur avec comme paramètres les coordonnées du Point2D
	*	@params float x, l'abscisse du pofloat
	*	@params float y, l'ordonnée du pofloat
	*/
   Point2D(float x, float y);

	/**
	*	Getters et setters de X et Y
	*/
   float getX();

   float getY();

   void setX(float x);

   void setY(float y);


	/**
	*	Translation du pofloat par rapport à un autre
	*	On déplace le pofloat suivant les coordonées du pofloat donné
	*	@params Point2D t, le pofloat pour la translation
	*/
	void translation(Point2D t);

	/**
	*	Idem
	*	@params float x, le déplacement selon l'axe x
	*	@params float y, le déplacement selon l'axe y
	*/
	void translation(float x, float y); 


	/**
	*	Fonction permettant de savoir si deux pofloats sont placés aux mêmes endroit sur l'environnement 2D
	*	@params Point2D pofloat, le pofloat à comparé avec l'objet courant
	*/
   bool estIdentique(Point2D pofloat);


	/**
	*	Fonction d'affichage du pofloat
	*
	*/
	void affiche(ostream& flux) const;

	friend ostream& operator <<(ostream& flux, const Point2D& p);

 private:
    float x;
    float y;
 
};

#endif // Point2D_h
