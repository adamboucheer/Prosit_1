#pragma once
class point
{
private:
	double X;
	double Y;
	void ini(double x, double y);
public:
	point();
	point(double x, double y);
	double getXcoord();
	double getYcoord();
	void setPoint(double x, double y);
	double distanceTO(const point& other);
};

