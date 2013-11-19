/**
*	Classe Segment. Représente un Segment 2D
*       @Author Clin Matthieu
*       @Author Vecchio Quentin
*
*       @version 1.0.0.0 on 2013-11-15
*/
#ifndef Segment_h
#define Segment_h

#include "Figure.h"
#include "Point2D.h"
#include <iostream>
#include <ostream>
#include <cmath>
using namespace std;
class Segment : public Figure {

 protected:
    Point2D B;

 public:


	/**
	*	@params Point2D A, le point de départ A
	*	@params Point2D B, le point d'arrivée B
	*/
    Segment(Point2D A, Point2D B);


	/**
	*	Getters et Setters du point B
	*/
    Point2D getB();

    void setB(Point2D B);

	/**
	*	Affichage du segment dans le terminal
	*/
    void affiche(ostream& flux) const;

	/**
	*	Translation du segment suivant un point
	*/
    void translation(Point2D point);

	/**
	*	Fonction permettant de savoir si deux segments sont perpendiculaires
	*	@params Segment segment, le segment qui peut être perpendiculaire à l'objet courant
	*	@return true, si les segments sont perpendiculaires
	*	@return false, sinon
	*/
    bool estPerpendiculaire(Segment segment);

	/**
	*	Fonction permettant de savoir si deux segments sont parallèles
	*	@params Segment segment, le segment qui peut être parrallèle à l'objet courant
	*	@return true, si les segments sont parrallèles
	*	@return false, sinon
	*
	*/
    bool estParallele(Segment segment);

	/**
	*	Fonction permettant de savoir si deux segments se coupent
	*	@params Segment segment, le segment qui peut être couper l'objet courant
	*	@return true, si les segments se coupent
	*	@return false, sinon
	*/
    bool seCoupe(Segment segment);

	/**
	*	Renvoit la longueur du segment
	*	@return float, la longueur du segment
	*/
	 float longueur();

 	friend ostream& operator <<(ostream& flux, const Segment& s);
};
#endif // Segment_h
