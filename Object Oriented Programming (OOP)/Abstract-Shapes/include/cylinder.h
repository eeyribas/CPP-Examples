#ifndef CYLINDER_H
#define CYLINDER_H

#include "circle.h"

using namespace std;

class Cylinder : public Circle
{
public:
	Cylinder(double h = 0.0, double r = 0.0, int x = 0, int y = 0);
	void SetH(double);
	double ReadH();
	virtual double Area() const;
	virtual double Volume() const;

	virtual void WriteName() const{
		cout<<" Cylinder : ";
	}

	virtual void Write() const;

private:
	double h;
};

#endif // CYLINDER_H
