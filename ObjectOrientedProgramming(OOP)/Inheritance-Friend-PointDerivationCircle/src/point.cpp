#include "point.h"

Point::Point(int a, int b)
{
	Setting(a, b);
}

int Point::ReadX() const
{
    return x;
}

int Point::ReadY() const
{
    return y;
}

void Point::Setting(int a, int b)
{
	x = a;
	y = b;
}

ostream &operator<<(ostream &a, const Point &b)
{
	a << '[' << b.x << "," << b.y << ']';
	return a;
}
