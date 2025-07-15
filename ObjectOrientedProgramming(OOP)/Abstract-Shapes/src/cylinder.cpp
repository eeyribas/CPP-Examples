#include "cylinder.h"

Cylinder::Cylinder(double tmpH, double r, int x, int y) : Circle(r, x, y)
{
	SetH(tmpH);
}

void Cylinder::SetH(double tmpH)
{
	h = tmpH > 0 ? tmpH : 0;
}

double Cylinder::Area() const
{
	return Circle::Area() * 2 + 2 * 3.14 * ReadR() * h;
}

double Cylinder::Volume() const
{
	return Circle::Area() * h;
}

void Cylinder::Write() const
{
	Circle::Write();
	cout << " ; Height = " << h;
}
