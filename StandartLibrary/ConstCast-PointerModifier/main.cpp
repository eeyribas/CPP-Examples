#include <iostream>
#include <conio.h>

using namespace std;

void Function(const int *p)
{
	int *value = const_cast<int*>(p);
	*value = 100;
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
