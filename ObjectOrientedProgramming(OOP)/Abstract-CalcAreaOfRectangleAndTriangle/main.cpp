#include <iostream>
#include <conio.h>

using namespace std;

class Area
{
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

	virtual double GetArea() = 0;

private:
    double dim_1, dim_2;
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
	Area *area;
	Rectangle rec;
	Triangle tri;

	rec.SetArea(2.2, 4.3);
	tri.SetArea(6.5, 2.3);

	area = &rec;
	cout << "Triangle = " << area->GetArea() << "\n\n";
	area = &tri;
	cout << "Rectangle = " << area->GetArea() << "\n";

	getch();
	return 0;
}
