#include <iostream>
#include <conio.h>

using namespace std;

template <class X> void SwapVariables(X &a, X &b)
{
	X temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int i = 10, j = 20;
	float x = 10.1, y = 20.3;
	cout << "Original i, j = " << i << " " << j << endl;
	cout << "Original x, y = " << x << " " << y << endl;

	SwapVariables(i, j);
	SwapVariables(x, y);
	cout << "SwapVariables i, j = " << i << " " << j << endl;
	cout << "SwapVariables x, y = " << x << " " << y << endl;

	getch();
	return 0;
}
