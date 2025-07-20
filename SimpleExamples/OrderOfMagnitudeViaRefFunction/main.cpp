#include <iostream>
#include <conio.h>

using namespace std;

void Magnitude(long &num, long order)
{
	for (; order; order--)
        num = num * 10;
}

int main()
{
	long n = 4;
	long o = 2;
	cout << "4 raised to the 2nd order of magnitude is : ";
	Magnitude(n, o);
	cout << n << '\n';

	getch();
	return 0;
}
