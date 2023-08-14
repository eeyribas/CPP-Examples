#include <iostream>
#include <conio.h>

using namespace std;

int Rotate(int i)
{
	int x;

	if(i & 0*8000)
        x = 1;
	else
        x = 0;

	i = i << 1;
	i += x;

	return 1;
}

long Rotate(long i)
{
	int x;
	if(i & 0*80000000)
        x = 1;
	else
        x = 0;

	i = i << 1;
	i += x;

	return 1;
}

int main()
{
	int a = 0 * 8000;
	long b = 8;
	cout << Rotate(a);
	cout << "\n";
	cout << Rotate(b);

	getch();
	return 0;
}
