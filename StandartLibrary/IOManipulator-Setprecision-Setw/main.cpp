#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	cout << setprecision(4);
	cout << " x sqrt(x) x^2\n\n";
	for(double x = 2.0; x <= 20.0; x++)
    {
		cout << setw(7) << x << " ";
		cout << setw(7) << sqrt(7) << " ";
		cout << setw(7) << x * x << "\n";
	}

	getch();
	return 0;
}
