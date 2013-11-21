#include <iostream>
#include <string.h>

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

Point2D donnePoint(string nom){
	
	float x, y;
	cout << "Définition du point " << nom << endl;
	cout << "X:";
	cin >> x;
	cout << endl << "Y:";
	cin >> y;
	cout << endl;
	return Point2D(x,y);
}


Segment creerSegment(){

	Point2D a;
	Point2D b;
	a = donnePoint("A");
	b = donnePoint("B");
	return Segment(a,b);
}

Cercle creerCercle(){
	Point2D o;
	int a;
	o = donnePoint("O");
	cout << "Le rayon:";
	cin >> a;
	return Cercle(o, a); 
	
}

ArcCercle creerArcCercle(){
	Cercle c;
	c = creerCercle();
	Point2D depart;
	depart = donnePoint("A");
	float angle;
	cout << "L'angle" << endl;
	cin >> angle;
	
	return ArcCercle(c,angle,depart);
}

Parallelogramme creerParallelogramme(){
	Point2D a,b,c,d;
	a = donnePoint("A");
	b = donnePoint("B");
	c = donnePoint("C");
	d = donnePoint("D");

	return Parallelogramme(a,b,c,d);
}

Quadrangle creerQuadrangle(){
	Point2D a,b,c,d;
	a = donnePoint("A");
	b = donnePoint("B");
	c = donnePoint("C");
	d = donnePoint("D");

	return Quadrangle(a,b,c,d);
}

Carre creerCarre(){
	Carre* c;

	Parallelogramme q = creerParallelogramme();	
	c = static_cast<Carre*>(&q);
	return *c;
}

Losange creerLosange(){
	Losange* l;

	Parallelogramme q = creerParallelogramme();	
	l = static_cast<Losange*>(&q);
	return *l;

}

Rectangle creerRectangle(){
	Rectangle* r;
	
	Parallelogramme q = creerParallelogramme();
	r = static_cast<Rectangle*>(&q);
	return *r;
}

Figure* creerFigure(){

	cout << "Création d'une figure" << endl;
	cout << "Quelle figure voulez-vous creer ?" <<endl;
	cout << "\t (1) Un segment" <<endl;
	cout << "\t (2) Un cercle" << endl;
	cout << "\t (3) Un Arc de Cercle" << endl;
	cout << "\t (4) Un carré" << endl;
	cout << "\t (5) Un losange" << endl;
	cout << "\t (6) Un quadrangle" << endl;
	cout << "\t (7) Un Rectangle" << endl;

	int choixFigure;
	cout << "Votre choix:";
	cin >> choixFigure;

	while(choixFigure < 1 || choixFigure > 8){
		cout << "Erreur lors du choix" << endl;
		cout << "Votre choix:";
		cin >> choixFigure;
	}

	Figure g;

	switch(choixFigure){
		case 1: { g = creerSegment(); break; }
		case 2:	{ g = creerCercle();  break; }
		case 3:	{ g = creerArcCercle();  break; }
		case 4:	{ g = creerCarre();  break; }
		case 5:	{ g = creerLosange();  break; }
		case 6:	{ g = creerQuadrangle();  break; }
		case 7:	{ g = creerRectangle();  break; }
	}

	return &g;
}


int main()
{

	int choixInit;

	cout << "Bienvenue dans notre application de dessin technique" << endl;
	cout << "Que voulez-vous faire ?" <<endl;
	cout << "\t (1) Créer une figure" <<endl;
	cout << "\t (2) Créer un multisegment" << endl;
	cout << "\t (3) Créer un dessin technique" << endl;
	cout << "Votre choix:";
	cin >> choixInit;

	cout << endl;
	while(choixInit < 1 || choixInit > 3){
		cout << "Erreur lors du choix" << endl;
		cout << "Votre choix:";
		cin >> choixInit;	
	}

	Figure* f;

	switch (choixInit) 
	{ 
		case 1: { f = creerFigure(); break; } 
		case 2: { cout <<"2";    break; } 
		case 3: { cout << "3";   break; } 
	} 



	cout << "Affichage" << endl;
	cout << (*f);

	/*
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
