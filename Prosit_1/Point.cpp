#include "Point.h"
#include "math.h"

using namespace std;

void point::ini(double x, double y){
	this->setPoint(x, y);
}

point::point(){
	this->ini(0, 0);
}

point::point(double x, double y)
{
	this->ini(x, y);
}

double point::getXcoord(){
	return X;
}

double point::getYcoord(){
	return Y;
}

void point::setPoint(double x, double y){
	X = x;
	Y = y;
}

double point::distanceTO(const point& other){
	return (sqrt(((other.X - X) * (other.X - X)) + ((other.Y - Y) * (other.Y - Y))));
}


