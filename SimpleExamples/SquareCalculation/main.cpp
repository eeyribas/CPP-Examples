#include <iostream>
#include <conio.h>
#include <cmath>

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
	cout << "90.34 = " << Square(90.34);
	cout << "\n\n";
	cout << "90L = " << Square(90L);
	cout << "\n\n";
	cout << "90 = " << Square(90);

	getch();
	return 0;
}
