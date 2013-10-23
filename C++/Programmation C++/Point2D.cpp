#include "Point2D.h"
#include <iostream>

using namespace std;

Point2D::Point2D()
{
	this->x = 0;
	this->y = 0;
}

Point2D::Point2D(int x, int y)
{
	this->x = x;
	this->y = y;
}

int Point2D::getX()
{
	return this->x;
}

int Point2D::getY()
{
	return this->y;
}

void Point2D::setX(int x)
{
	this->x = x;
}
 
void Point2D::setY(int y)
{
	this->y = y;
}

void Point2D::translation(Point2D t){
	this->x += t.getX();
	this->y += t.getY();
}

void Point2D::translation(int x, int y){
	this->x += x;
	this->y += y;
}


bool Point2D::estIdentique(Point2D point)
{
	return this->x == point.x && this->y == point.y;
}

void Point2D::affiche(){
	cout << "Point:" << endl;
	cout << "x:" << this->x << endl;
	cout << "y:" << this->y << endl;
}

