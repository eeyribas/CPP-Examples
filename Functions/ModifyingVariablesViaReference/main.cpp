#include <iostream>
#include <conio.h>

using namespace std;

void Function(int &n);

int main()
{
	int i = 0;
	Function(i);
	cout << "i new ref = " << i << "\n";

	getch();
	return 0;
}

void Function(int &n)
{
	n = 100;
}
