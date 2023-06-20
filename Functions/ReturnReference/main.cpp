#include <iostream>
#include <conio.h>

using namespace std;

int &F();
int x;

int main()
{
	F() = 100;
	cout << x << "\n";

	getch();
	return 0;
}

int &F()
{
	return x;
}
