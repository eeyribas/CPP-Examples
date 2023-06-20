#include "point.h"

Point::Point(int a, int b)
{
	SetPoint(a, b);
}

void Point::SetPoint(int a, int b){
	x = a;
	y = b;
}

void Point::Write()const
{
	cout << '[' << x << ' , ' << y << ']';
}
