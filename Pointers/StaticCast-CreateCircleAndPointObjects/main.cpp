#include<iostream>
#include<conio.h>
#include<iomanip>
#include "point.h"
#include "circle.h"

using namespace std;

int main()
{
	Point *point = 0, n(30, 50);
	Circle *circle = 0, d(2.7, 120, 89);
	cout << "Point n : " << n << "\nCircle d : " << d << '\n';

	point = &d;
	cout << "\nCircle d(with *point) : " << *point << '\n';

	circle = static_cast<Circle *>(point);
	cout << "\nCircle d(with *circle) : \n" << *circle <<
		 "\nd Area (with circle) : " << circle->Area() << '\n';

	point = &n;
	cout << static_cast<Circle *>(point);
	cout << "\nPoint n(with *circle) : \n" << *circle
		 << "\nArea : " << circle->Area() << endl;

	getch();
	return 0;
}
