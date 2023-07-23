#include <iostream>
#include <conio.h>

using namespace std;

const double PI = 3.14159;

inline double Area(double a)
{
	return PI * a * a;
}

int main()
{
	double r;

	cout << "Enter r = ";
	cin >> r;
	cout << "Area = " << Area(r) << endl;

	getch();
	return 0;
}
