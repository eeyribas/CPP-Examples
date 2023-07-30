#include <iostream>
#include <conio.h>

using namespace std;

namespace Demo
{
	int a;
}

int x;

namespace Demo
{
	int b;
}

int main()
{
	using namespace Demo;
	a = b = x = 100;
	cout << a << ", " << b << ", " << x;

	getch();
	return 0;
}
