#include <iostream>
#include <iomanip>
#include <conio.h>
#include "shape.h"
#include "circle.h"
#include "point.h"
#include "cylinder.h"

using namespace std;
using std::ios;
using std::setiosflags;
using std::setprecision;

void Pointer(const Shape*);
void Reference(const Shape&);

int main()
{
    cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(2);

	Point point(7, 11);
	Circle circle(3.5, 22, 8);
	Cylinder cylinder(10, 3.3, 10, 10);

	point.WriteName();
	point.Write();
	cout << '\n';

	circle.WriteName();
	circle.Write();
	cout << '\n';

	cylinder.WriteName();
	cylinder.Write();
	cout << '\n';

	Shape *shape_array[3];
	shape_array[0] = &point;
	shape_array[1] = &circle;
	shape_array[2] = &cylinder;

	cout << "Virtual function calls made with base class pointers\n";
	for (int i = 0; i < 3; i++)
		Pointer(shape_array[i]);

	cout << "Virtual function calls made with a base class reference\n";
	for (int i = 0; i < 3; i++)
		Reference(*shape_array[i]);

	getch();
    return 0;
}

void Pointer(const Shape *tmp)
{
	tmp->WriteName();
	tmp->Write();
	cout << "\nArea = " << tmp->Area()
		 << "\nVolume = " << tmp->Volume() << "\n\n";
}

void Reference(const Shape &tmp)
{
	tmp.WriteName();
	tmp.Write();
	cout << "\nArea = " << tmp.Area()
		 << "\nVolume = " << tmp.Volume() << "\n\n";
}
