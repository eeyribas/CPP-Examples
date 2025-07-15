#include <iostream>
#include <conio.h>

using namespace std;

class AreaClass
{
public:
	double height;
	double widht;
};

class Rectangle : public AreaClass
{
public:
	Rectangle(double h, double w);

	double Area();
};

Rectangle::Rectangle(double a, double b)
{
	height = a;
	widht = b;
}

double Rectangle::Area()
{
	return widht * height;
}

class Isosceles : public AreaClass
{
public:
	Isosceles(double h, double w);

	double Area();
};

Isosceles::Isosceles(double a, double b)
{
	height = a;
	widht = b;
}

double Isosceles::Area()
{
	return 0.5 * widht * height;
}

int main()
{
	Rectangle rec(10.0, 5.0);
	Isosceles isoscles(4.0, 6.0);
	cout << "Rectangle = " << rec.Area() << "\n";
	cout << "Isosceles = " << isoscles.Area() << "\n";

	getch();
	return 0;
}
