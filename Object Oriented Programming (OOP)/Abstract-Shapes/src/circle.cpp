#include "circle.h"

Circle::Circle(double r, int a, int b) : Point(a, b)
{
	SetR(r);
}

void Circle::SetR(double tmp)
{
	r= tmp > 0 ? tmp : 0;
}

double Circle::ReadR() const
{
	return r;
}

double Circle::Area()const
{
	return 3.14 * r * r;
}

void Circle::Write()const
{
	Point::Write();
	cout<<" ; r = " << r;
}
