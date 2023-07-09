#include <iostream>
#include <conio.h>
#include "complex.h"

using namespace std;

int main()
{
    Complex x, y(4.3, 8.2), z(3.3, 1.1);

	cout << "x : ";
	x.Print();
	cout << "\ny : ";
	y.Print();
	cout << "\nz : ";
	z.Print();

	x = y + z;
	cout << "\n\nx = y + z : \n";
	x.Print();
	cout << "=";
	y.Print();
	cout << " + ";
	z.Print();

	x = y - z;
	cout << "x = y - z : ";
	x.Print();
	cout << "=";
	y.Print();
	cout << "-";
	z.Print();
	cout << endl;

	getch();
    return 0;
}
