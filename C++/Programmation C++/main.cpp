#include <iostream>
#include "Point2D.h"
#include "Figure.h"
using namespace std;

void Affiche(Point2D a){
	cout << "Le point:" << endl;
	cout << "X:" << a.getX() << endl;
	cout << "Y:" << a.getY() << endl;
}

main(){
	Point2D p(2,3);
	Point2D p2(2,2);
	Figure a(p);
	Affiche(a.getA());

	a.translation(p2);
	Affiche(a.getA());
	
	
}
