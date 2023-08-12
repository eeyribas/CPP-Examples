#include <iostream>
#include <conio.h>

using namespace std;

double RectangleArea(double lenght, double width)
{
	return lenght * width;
}

double RectangleArea(double lenght)
{
	return lenght * lenght;
}

int main()
{
	cout << "10*5.8 rectangle area = " << RectangleArea(10, 5.8) << "\n";
	cout << "10 rectangle area = " << RectangleArea(10) << "\n";

	getch();
	return 0;
}
