#include <iostream>
#include <conio.h>

using namespace std;
using std::ios;

int main()
{
	double x = .001234567, y = 1.946e9;
	cout << "Simple : " << x << '\t' << y << '\n';
	cout.setf(ios::scientific, ios::floatfield);
	cout << "\nScientific : " << x << '\t' << y << '\n';
	cout.unsetf(ios::scientific);
	cout << "\nUnset : " << x << '\t' << y << '\n';
	cout.setf(ios::fixed, ios::floatfield);
	cout << "\nFixed : " << x << '\t' << y << endl;

	getch();
	return 0;
}
