#include <iostream>

#include "./Quadrilatere/Carre.h"
#include "./Quadrilatere/Losange.h"
#include "./Quadrilatere/Parallelogramme.h"
#include "./Quadrilatere/Quadrangle.h"
#include "./Quadrilatere/Quadrilatere.h"
#include "./Quadrilatere/Rectangle.h"
using namespace std;

int main()
{
	Carre c(Point2D(2,3), Point2D(3,2), Point2D(3,3), Point2D(2,2));
	cout << c << endl;

	Losange l(Point2D(2,3), Point2D(3,2), Point2D(3,3), Point2D(2,2));
	cout << l << endl;

	Quadrilatere qa(Point2D(2,3), Point2D(3,2), Point2D(3,3), Point2D(2,2));
	cout << qa << endl;

	Parallelogramme p(Point2D(2,3), Point2D(3,2), Point2D(3,3), Point2D(2,2));
	cout << p << endl;

	Quadrangle q(Point2D(2,3), Point2D(3,2), Point2D(3,3), Point2D(2,2));
	cout << q << endl;

	Rectangle r(Point2D(2,3), Point2D(3,2), Point2D(3,3), Point2D(2,2));
	cout << r << endl;
	return 0;
}
