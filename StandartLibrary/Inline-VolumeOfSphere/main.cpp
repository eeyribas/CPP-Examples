#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

const double PI = 3.14159;

inline double Volume(const double r)
{
	return 4.0 / 3.0 * PI * pow(r, 3);
}

int main()
{
	double r;
	cout << "Enter r = ";
	cin >> r;
	cout << "Volume = " << Volume(r) << endl;

	getch();
	return 0;
}
