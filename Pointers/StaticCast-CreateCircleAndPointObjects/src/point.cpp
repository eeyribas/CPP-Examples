#include "point.h"
#include<iostream>

using namespace std;

Point::Point(int a, int b)
{
	SetPoint(a, b);
}

void Point::SetPoint(int a, int b)
{
	x = a;
	y = b;
}

ostream &operator<<(ostream &a, const Point &b)
{
	a << '[' << b.x << "," << b.y << ']';

	return a;
}
