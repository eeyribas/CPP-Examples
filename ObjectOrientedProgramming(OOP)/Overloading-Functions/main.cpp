#include <iostream>
#include <conio.h>

using namespace std;

float Function(float i)
{
	return i / 2.0;
}

double Function(double f)
{
	return f / 3.0;
}

int main()
{
	float x = 10.09;
	cout << Function(x) << "\n";
	double y = 10.09;
	cout << Function(y);

	getch();
	return 0;
}
