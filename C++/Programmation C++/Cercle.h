#ifndef Cercle_h
#define Cercle_h

#include "Figure.h"
#include "Point2D.h"


class Cercle : public Figure {


 private:
    int rayon;


 public:

    Cercle();

    Cercle(Point2D point);

    Cercle(Point2D point, int rayon);

    int getRayon();

    void setRayon(int rayon);

    void affiche();

    void translation(Point2D point);

};

#endif // Cercle_h
