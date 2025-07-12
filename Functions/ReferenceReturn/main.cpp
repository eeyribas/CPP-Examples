#include <iostream>
#include <conio.h>

using namespace std;

int &Function();
int x;

int main()
{
	Function() = 100;
	cout << x << "\n";

	getch();
	return 0;
}

int &Function()
{
	return x;
}
