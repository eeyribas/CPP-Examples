#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int base, h;
	cout << "Enter base value = ";
	cin >> base;
	cout << "Enter h = ";
	cin >> h;

	double area = (double)base * h / 2;
	cout << "Area = " << area << endl;

	getch();
	return 0;
}
