#include <iostream>
#include "Point2D.h"
#include "Figure.h"
using namespace std;

main(){
	Point2D p(2,3);
	Point2D p2(2,3);
	Figure a(p);
	if(p.estIdentique(p2)){
		cout << "Identique"<<endl;
	}else{
		cout << "Non"<<endl;
	}
}
