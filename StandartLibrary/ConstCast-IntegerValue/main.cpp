#include <iostream>
#include <conio.h>

using namespace std;

void Function(const int *p)
{
	int *v;
	v = const_cast<int *>(p);
	*v = 100;
}

int main()
{
	int x = 99;
	cout << "x before = " << x << endl;

	Function(&x);
	cout << "x after = " << x << endl;

	getch();
	return 0;
}
