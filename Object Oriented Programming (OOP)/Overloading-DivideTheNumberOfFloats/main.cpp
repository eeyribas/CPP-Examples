#include <iostream>
#include <conio.h>

using namespace std;

float F(float i)
{
	return i / 2.0;
}

double F(double f)
{
	return f / 3.0;
}

int main()
{
	float x = 10.09;
	double y = 10.09;
	cout << F(x) << "\n";
	cout << F(y);

	getch();
	return 0;
}
