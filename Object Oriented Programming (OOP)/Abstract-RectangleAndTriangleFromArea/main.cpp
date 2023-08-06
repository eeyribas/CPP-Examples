#include <iostream>
#include <conio.h>

using namespace std;

class Area
{
	double dim_1, dim_2;

public:
	void SetArea(double d_1, double d_2)
	{
		dim_1 = d_1;
		dim_2 = d_2;
	}

	void GetDim(double &d_1, double &d_2)
	{
		d_1 = dim_1;
		d_2 = dim_2;
	}

	virtual double GetArea()=0;
};

class Rectangle : public Area
{
public:
	double GetArea()
	{
		double d_1, d_2;
		GetDim(d_1, d_2);

		return d_1 * d_2;
	}
};

class Triangle : public Area
{
public:
	double GetArea()
	{
		double d_1, d_2;
		GetDim(d_1, d_2);

		return 0.5 * d_1 * d_2;
	}
};

int main()
{
	Area *p;
	Rectangle r;
	Triangle t;

	r.SetArea(2.2, 4.3);
	t.SetArea(6.5, 2.3);

	p = &r;
	cout << "Triangle = " << p->GetArea() << "\n\n";
	p = &t;
	cout << "Rectangle = " << p->GetArea() << "\n";

	getch();
	return 0;
}
