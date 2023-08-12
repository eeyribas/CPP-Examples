#include <iostream>
#include <conio.h>

using namespace std;

void Function(int a = 0, int b = 0)
{
	cout << "a = " << a << ", b = " << b << "\n";
}

int main()
{
	Function();
	Function(10);
	Function(10, 99);

	getch();
	return 0;
}
