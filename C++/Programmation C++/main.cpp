#include <iostream>
#include "Segment.h"
#include "Point2D.h"
#include "Cercle.h"
#include "Triangle.h"
using namespace std;

void Affiche(Point2D a){
	cout <<"Point: x:" << a.getX() << "  y:" << a.getY()<<endl;
}

int main()
{
	//Point
    Point2D a (2,2);
    Point2D b (4,2);
    Point2D c (2,4);
    Point2D d (4,4);
	//Segment
    Segment s(a,b);
    Segment s1(a,b);
	//Triangle
    Triangle t(a,b,c);
    Triangle t1(s,c);
	if(s.estParallele(s1)){
		cout <<"oui" <<endl;
	}else{
		cout <<"non" <<endl;
	}
    cout << t << endl;
    cout << t1 <<endl ;
    return 0;
}
