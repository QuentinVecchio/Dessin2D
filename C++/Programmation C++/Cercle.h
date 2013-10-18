#ifndef Cercle_h
#define Cercle_h

#include "Figure.h"
#include "Point2D.h"


class Cercle : public Figure {

 public:

    virtual void Cercle();

    virtual void Cercle(Point2D point);

    virtual void Cercle(Point2D point, Integer rayon);

    virtual Integer getRayon();

    virtual void setRayon(Integer rayon);

    virtual void affiche();

    virtual void translation(Point2D point);

 public:
    Integer rayon;
};

#endif // Cercle_h
