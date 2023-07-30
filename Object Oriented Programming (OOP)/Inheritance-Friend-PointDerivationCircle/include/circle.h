#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include "point.h"

using std::ostream;

class Circle : public Point
{
	friend ostream &operator<<(ostream &, const Circle &);

public:
	Circle(double r = 0.0, int x = 0, int y = 0);
	void SetR(double);
	double ReadR() const;
	double Area() const;

protected:
	double r;
};

#endif // CIRCLE_H
