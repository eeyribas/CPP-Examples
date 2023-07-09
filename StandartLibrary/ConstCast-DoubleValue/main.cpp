#include <iostream>
#include <conio.h>

using namespace std;

void Function(const double &i)
{
	double &v = const_cast<double &>(i);
	v = 100.0;
}
int main()
{
	double x = 99.9;
	cout << x << endl;

	Function(x);
	cout << x << endl;

	getch();
	return 0;
}
