#ifndef Point2D_h
#define Point2D_h

#include <iostream>
#include <ostream>

using namespace std;
class Point2D {

 public:

   Point2D();

   Point2D(int x, int y);

   int getX();

   int getY();

   void setX(int x);

   void setY(int y);

	void translation(Point2D t);

	void translation(int x, int y); 

   bool estIdentique(Point2D point);

	void affiche(ostream& flux) const;

	friend ostream& operator <<(ostream& flux, const Point2D& p);

 private:
    int x;
    int y;
 
};

#endif // Point2D_h
