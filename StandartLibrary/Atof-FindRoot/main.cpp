#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
	double a = atof(argv[1]);
	double b = atof(argv[2]);
	double c = atof(argv[3]);
	double delta = pow(b, 2) - (4 * a * c);
	if(delta <0)
	{
		cout << "The roots isn't reel." << endl;
	}
	else
    {
		double kdelta = sqrt(delta);
		double x1 = -b - kdelta / (2 * a);
		double x2 = -b + kdelta / (2 * a);
		cout << x1 << endl;
		cout << x2 << endl;
	}

	getch();
	return 0;
}
