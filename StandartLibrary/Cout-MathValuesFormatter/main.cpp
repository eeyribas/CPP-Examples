#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{
	cout.precision(4);
	cout << " x sqrt(x) x^2\n\n";
	for (double x = 2.0; x <= 20.0; x++) {
		cout.width(7);
		cout << x << '  ';
		cout.width(7);
		cout << sqrt(x) << '  ';
		cout.width(7);
		cout << x * x << "\n";
	}

	getch();
	return 0;
}
