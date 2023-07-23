#include "circle.h"
#include <iostream>

Circle::Circle(double a, int b, int c) : Point(b, c)
{
	SetR(a);
}

void Circle::SetR(double tmp_r)
{
	r = (tmp_r >= 0 ? tmp_r : 0);
}

double Circle::ReadR() const
{
	return r;
}

double Circle::Area() const
{
	return 3.14 * r * r;
}

ostream &operator<<(ostream &a, const Daire &b)
{
	a << "Centre = " << static_cast<Point>(b) << "; r = "
      << setiosflags(ios::fixed | ios::showpoint) << setprecision(2) << b.r;

	return a;
}
