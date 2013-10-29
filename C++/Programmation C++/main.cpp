#include <iostream>

#include "./Base/Point2D.h"
#include "./Base/Figure.h"
#include "./Base/Segment.h"
#include "./Cercle/Cercle.h"
using namespace std;

int main()
{
	//cout << "Bienvenue:" << endl;
	Cercle c(Point2D(2,3), 5);
	cout << c;
	Figure f(2,3);
	return 0;
}
