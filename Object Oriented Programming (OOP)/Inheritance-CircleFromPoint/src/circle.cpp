#include "circle.h"

Circle::Circle(double t_r, int a, int b) : Point(a, b)
{
	r = t_r;
	cout << "r = " << r << '[' << x << "," << y << ']' << endl;
}

Circle::~Circle()
{
	cout << "~r = " << r << '[' << x << "," << y << ']' << endl;
}
