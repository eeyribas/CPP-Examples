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

	if (delta >= 0) {
		double k_delta = sqrt(delta);
		double x_1 = -b - k_delta / (2 * a);
		double x_2 = -b + k_delta / (2 * a);
		cout << x_1 << endl;
		cout << x_2 << endl;
	} else {
	    cout << "The roots isn't reel." << endl;
	}

	getch();
	return 0;
}
