#include <iostream>
#include <conio.h>

using namespace std;

void Swrp(int &x, int &y);

int main()
{
	int i = 10, j = 19;
	cout << "i = " << i << "\n";
	cout << "j = " << j << "\n\n";

	Swrp(i, j);
	cout << "New Values\n";
	cout << "i = " << i << "\n";
	cout << "j = " << j << "\n";

	getch();
	return 0;
}

void Swrp(int &x, int &y)
{
	int t;
	t = x;
	x = y;
	y = t;
}
