#include "Point.h"
#include <iostream>

using namespace std;

int main()
{
	double Xa, Xb, Ya, Yb;
	cout << "Rentre les coordonées de ton premier points Xa Ya : ->";
	cin >> Xa >> Ya;
	cout << "le deuxieme point Xb Yb : ->";
	cin >> Xb >> Yb;
	point a(Xa, Ya);
	point b(Xb, Yb);
	cout << "Point a : (" << a.getXcoord() << ", " << a.getYcoord()  << ")\n";
	cout << "Point b : (" << b.getXcoord() << ", " << b.getYcoord() << ")\n";
	cout << "Distance ab : " << a.distanceTO(b);
}

