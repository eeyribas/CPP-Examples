#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int Square(int i)
{
	cout << "Integer\n";
	return (int)sqrt((double)i);
}

long Square(long i)
{
	cout << "Long\n";
	return (long)sqrt((double)i);
}

double Square(double i)
{
	cout << "Double\n";
	return sqrt(i);
}

int main()
{
	cout << "90.34 = " << Square(90.34) << "\n\n";
	cout << "90L = " << Square(90L) << "\n\n";
	cout << "90 = " << Square(90);

	getch();
	return 0;
}
