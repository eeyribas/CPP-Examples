#include <iostream>
#include <conio.h>

using namespace std;

int Abs(int n)
{
	cout << "Integer abs()\n";
	return n < 0 ? -n : n;
}

long Abs(long n)
{
	cout << "Long abs()\n";
	return n < 0 ? -n : n;
}

double Abs(double n)
{
	cout << "Double abs()\n";
	return n < 0 ? -n : n;
}

int main()
{
	cout << "-10 = " << Abs(-10) << "\n\n";
	cout << "-10L = " << Abs(-10L) << "\n\n";
	cout << "-10.012 = " << Abs(-10.012) << endl;

	getch();
	return 0;
}
