#include <iostream>
#include <conio.h>

using namespace std;

class Box
{
	double l, w, h;
	double volume;

public:
	Box(double a, double b, double c);
	void Volume();

};

Box::Box(double a, double b, double c)
{
	l = a;
	w = b;
	h = c;
}

void Box::Volume()
{
	cout << "Volume = " << volume << "\n";
}

int main()
{
	Box x(2.2, 3.97, 8.09), y(1.0, 2.0, 3.0);
	x.Volume();
	y.Volume();

	getch();
	return 0;
}
