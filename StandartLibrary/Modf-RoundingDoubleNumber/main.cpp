#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

void Round(double &num);

int main()
{
	double i = 100.09;

	cout << i << " rounded up = ";
	Round(i);
	cout << i << "\n";

	i = 10.9;
	cout << i << " rounded up = ";
	Round(i);
	cout << i << "\n";

	getch();
	return 0;
}

void Round(double &num)
{
	double val;

	double frac = modf(num, &val);
	if(frac < 0.5)
		num = val;
	else
		num = val + 1.0;
}
