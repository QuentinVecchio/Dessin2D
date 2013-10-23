#include <iostream>
#include "Segment.h"
#include "Point2D.h"
#include "Cercle.h"
using namespace std;

void Affiche(Point2D a){
	cout <<"Point: x:" << a.getX() << "  y:" << a.getY()<<endl;
}

main(){

	Point2D a (2,2);
	Point2D b (4,2);
	Point2D c (2,4);
	Point2D d (4,4);

	Segment s(a,b);
	Segment s1(a,b);

	if(s.estParallele(s1)){
		cout <<"oui" <<endl;
	}else{
		cout <<"non" <<endl;
	}
}
