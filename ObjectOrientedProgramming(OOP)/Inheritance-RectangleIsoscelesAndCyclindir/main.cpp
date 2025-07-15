#include <iostream>
#include <conio.h>

using namespace std;

class AreaClass
{
public:
	double height;
	double width;
};

class Rectangle : public AreaClass
{
public:
	Rectangle(double h, double w){
        height = h;
		width = w;
	}

	double Area(){
		return height * width;
	}
};

class Isosceles : public AreaClass
{
public:
	Isosceles(double h, double w){
		height = h;
		width = w;
	}

	double Area(){
		return height * width * 0.5;
	}
};

class Cyclindir : public AreaClass
{
public:
	Cyclindir(double h, double w){
		height = h;
		width = w;
	}

	double Area(){
		return (2 * 3.1416 * (width / 2) * (width / 2)) + (3.1416 * width * height);
	}
};

int main()
{
	Rectangle b(10.0, 5.0);
	Isosceles i(4.0, 6.0);
	Cyclindir c(3.0, 4.0);

	cout << "Rectangle = " << b.Area() << "\n";
	cout << "Isosceles = " << i.Area() << "\n";
	cout << "Cyclindir = " << c.Area() <<" \n";

	getch();
	return 0;
}
