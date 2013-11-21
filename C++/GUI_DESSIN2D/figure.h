/**
*	Classe figure virtuelle représentant les éléments nécessaires pour être considérer comme une figure.
*	Une figure est forcément composée d'un point qui corespondra à son origine.
*	Une figure est muni de deux opérations indispensables:
*			- La translation
*			- L'affichage
*
*
*
*       @Author Clin Matthieu
*       @Author Vecchio Quentin
*
*       @version 1.0.0.0 on 2013-11-15
*/
#ifndef Figure_h
#define Figure_h

#include "point2D.h"
#include <iostream>
#include <ostream>

using namespace std;
class Figure {

 protected:
    Point2D A;

 public:

    /**
    *	Constructeur d'une figure.
    *	La figure peut être instanciée avec aucun paramètre, des valeurs par défaut sont alors prises
    */
    Figure();

    /**
    *	Constructeur avec deux paramètres
    *	@params float x, l'abscisse du point
    *	@params float y, l'ordonnée du point
    */
    Figure(float x, float y);

    /**
    *	Constructeur avec un point
    *	@params Point2d point, le point d'origine de la figure
    */
    Figure(Point2D point);

    /*
    *	Fonction de translation de la figure.
    *	Chaque figure doit être muni de cette opération.
    *	L'opération de translation selon les axes X et Y d'une figure consiste à "déplacer"
    *	celle-ci dans le repère. On applique donc la fonction translation à chaque élément de la figure
    *	@params Point2D point, le déplacement a effectuer sur la figure
    *
    */
    virtual void translation(Point2D point);

    /*
    *	Fonction d'affichage dans le terminal de la figure
    *	Une figure doit pouvoir être affichée dans le terminal, c'est à dire que l'on représente
    *	la figure en détaillant ses caractéristiques (les points)
    */
    virtual void affiche(ostream& flux) const;

    /*
    *	Les getters et setters du Point2D A
    */
    Point2D getA();

    void setA(Point2D A);


    /*
    *	Surcharge de l'opérateur d'affichage
    */

    friend ostream& operator <<(ostream& flux, const Figure& p);

};

#endif // Figure_h
