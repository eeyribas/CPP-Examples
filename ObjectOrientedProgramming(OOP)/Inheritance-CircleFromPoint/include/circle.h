#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include "point.h"

using namespace std;

class Circle : public Point
{
public:
	Circle(double r = 0.0, int x = 0, int y = 0);
	~Circle();

private:
	double r;
};

#endif // CIRCLE_H
