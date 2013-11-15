/**
*	Classe Point2D. Cette classe modélise un point positionné dans un environnement 2D
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
	*	@params float x, l'abscisse du point
	*	@params float y, l'ordonnée du point
	*/
   Point2D(int x, int y);

	/**
	*	Getters et setters de X et Y
	*/
   int getX();

   int getY();

   void setX(int x);

   void setY(int y);


	/**
	*	Translation du point par rapport à un autre
	*	On déplace le point suivant les coordonées du point donné
	*	@params Point2D t, le point pour la translation
	*/
	void translation(Point2D t);

	/**
	*	Idem
	*	@params float x, le déplacement selon l'axe x
	*	@params float y, le déplacement selon l'axe y
	*/
	void translation(int x, int y); 


	/**
	*	Fonction permettant de savoir si deux points sont placés aux mêmes endroit sur l'environnement 2D
	*	@params Point2D point, le point à comparé avec l'objet courant
	*/
   bool estIdentique(Point2D point);


	/**
	*	Fonction d'affichage du point
	*
	*/
	void affiche(ostream& flux) const;

	friend ostream& operator <<(ostream& flux, const Point2D& p);

 private:
    int x;
    int y;
 
};

#endif // Point2D_h
