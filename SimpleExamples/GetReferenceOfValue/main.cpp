#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x;
	int &ref = x;
	x = 10;
	ref = 10;
	ref = 100;

	cout << x << '  ' << ref << "\n";

	getch();
	return 0;
}
