#include <iostream>
#include <cctype>
#include <conio.h>

using namespace std;

char Min(char a, char b)
{
	return tolower(a) < tolower(b) ? a : b;
}

int Min(int a, int b)
{
	return a < b ? a : b;
}

double Min(double a, double b)
{
	return a < b ? a : b;
}

int main()
{
	cout << "Min = " << Min('x', 'a') << "\n";
	cout << "Min = " << Min(10, 20) << "\n";
	cout << "Min = " << Min(0.2234, 99.2) << "\n";

	getch();
	return 0;
}
