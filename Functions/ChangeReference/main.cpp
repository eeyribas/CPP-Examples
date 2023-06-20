#include <iostream>
#include <conio.h>

using namespace std;

void F(int &n);

int main()
{
	int i=0;
	F(i);
	cout << "i new ref = " << i << "\n";

	getch();
	return 0;
}

void F(int &n)
{
	n = 100;
}
