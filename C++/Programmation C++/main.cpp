#include <iostream>

/*Quadrilatere*/
#include "./Quadrilatere/Carre.h"
#include "./Quadrilatere/Losange.h"
#include "./Quadrilatere/Parallelogramme.h"
#include "./Quadrilatere/Quadrangle.h"
#include "./Quadrilatere/Quadrilatere.h"
#include "./Quadrilatere/Rectangle.h"


/*Triangle*/
#include "./Triangle/Equilateral.h"
#include "./Triangle/Isocele.h"
#include "./Triangle/TRectangle.h"
#include "./Triangle/Triangle.h"

/*Cercle*/
#include "./Cercle/ArcCercle.h"
#include "./Cercle/Cercle.h"

/*Base*/
#include "./Base/Figure.h"
#include "./Base/Point2D.h"
#include "./Base/Segment.h"


using namespace std;

int main()
{
	int x,y;
	cout << "A:";
	cin >> x;
	cin >> y;
	Point2D a(x,y);

	cout << "B:";
	cin >> x;
	cin >> y;
	Point2D b(x,y);

	cout << "C:";
	cin >> x;
	cin >> y;
	Point2D c(x,y);

	cout << "D:";
	cin >> x;
	cin >> y;
	Point2D d(x,y);

	cout << "Bienvenue" <<endl;

	Rectangle ca(a,b,c,d);
	cout << ca << endl;
	if(ca.estRectangle()){
		cout << "estRectangle" << endl;
	}else{
		cout << "non estRectangle" << endl;
	}
	

	Segment s2(c,d);

	/*if(s1.estPerpendiculaire(s2)){
		cout << "estPerpendiculaire" << endl;
	}else{
		cout << "non" << endl;
	}*/


	/*cout << p <<endl;

	Figure f(p);
	cout << f << endl;

	Segment s(p,p);
	cout << s << endl;

	Cercle c(p, 3);
	cout << c << endl;

	Triangle t(p,p,p);
	cout << t << endl;

	TRectangle tr(p,p,p);
	cout << tr << endl;

	Isocele i(p,p,p);
	cout << i << endl;

	Equilateral eq(p,p,p);
	cout << eq << endl;

	Carre ca(Point2D(2,3), Point2D(3,2), Point2D(3,3), Point2D(2,2));
	cout << ca << endl;

	Losange lo(Point2D(2,3), Point2D(3,2), Point2D(3,3), Point2D(2,2));
	cout << lo << endl;

	Quadrilatere qa(Point2D(2,3), Point2D(3,2), Point2D(3,3), Point2D(2,2));
	cout << qa << endl;

	Parallelogramme pa(Point2D(2,3), Point2D(3,2), Point2D(3,3), Point2D(2,2));
	cout << pa << endl;

	Quadrangle qu(Point2D(2,3), Point2D(3,2), Point2D(3,3), Point2D(2,2));
	cout << qu << endl;

	Rectangle r(Point2D(2,3), Point2D(3,2), Point2D(3,3), Point2D(2,2));
	cout << r << endl;*/
	return 0;
}
