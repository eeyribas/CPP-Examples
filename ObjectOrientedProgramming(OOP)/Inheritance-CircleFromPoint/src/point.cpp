#include "point.h"

Point::Point(int a, int b)
{
	x = a;
	y = b;
	cout << "Point: " << '[' << x << "," << y << ']' << endl;
}

Point::~Point()
{
	cout << "~Point: " << '[' << x << "," << y << ']' << endl;
}
