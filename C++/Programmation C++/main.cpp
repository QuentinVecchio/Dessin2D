#include <iostream>

#include "./Triangle/Triangle.h"
#include "./Triangle/TRectangle.h"
#include "./Triangle/Isocele.h"
#include "./Triangle/Equilateral.h"
using namespace std;

int main()
{
	Triangle t(Point2D(2,3),Point2D(3,3),Point2D(2,5));

	cout << t<<endl;

	TRectangle tr(Point2D(2,3),Point2D(3,3),Point2D(2,5));

	cout <<tr << endl;
	Isocele i (Point2D(2,3),Point2D(3,3),Point2D(2,5));
	Equilateral e (Point2D(2,3),Point2D(3,3),Point2D(2,5));
	return 0;
}
