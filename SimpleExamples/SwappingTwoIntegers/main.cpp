#include <iostream>
#include <conio.h>

using namespace std;

void Swap(int &x, int &y);

int main()
{
	int i = 10, j = 19;
	cout << "i = " << i << "\n";
	cout << "j = " << j << "\n\n";

	Swap(i, j);
	cout << "New Values\n";
	cout << "i = " << i << "\n";
	cout << "j = " << j << "\n";

	getch();
	return 0;
}

void Swap(int &x, int &y)
{
	int tmp = x;
	x = y;
	y = tmp;
}
