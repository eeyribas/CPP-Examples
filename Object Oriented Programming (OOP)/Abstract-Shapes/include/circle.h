#ifndef CIRCLE_H
#define CIRCLE_H

#include "point.h"

using namespace std;

class Circle : public Point
{
public:
	Circle(double r = 0, int x = 0, int y = 0);
	void SetR(double);
	double ReadR()const;
	virtual double Area() const;

	virtual void WriteName() const
	{
		cout << "Circle : ";
	}

	virtual void Write() const;

private:
	double r;
};

#endif // CIRCLE_H
