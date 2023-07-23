#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <iomanip>
#include "point.h"

using std::cout;
using std::ostream;
using std::ios;
using std::setiosflags;
using std::setprecision;

class Circle
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
