#ifndef Cercle_h
#define Cercle_h

#include "../Base/Figure.h"
#include "../Base/Point2D.h"

using namespace std;

class Cercle : public Figure {


 private:
    int rayon;


 public:

    Cercle();

    Cercle(Point2D point);

    Cercle(Point2D point, int rayon);

    int getRayon();

    void setRayon(int rayon);

    void affiche(ostream& flux) const;

    void translation(Point2D point);

	friend ostream& operator <<(ostream& flux, const Cercle& c);

};

#endif // Cercle_h
