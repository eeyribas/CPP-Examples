#include <iostream>
#include <new>
#include <conio.h>

using namespace std;

int main()
{
	double *p;
	do {
		p = new (nothrow)double[100];
		if (p)
			cout << "Alloction OK.\n";
		else
			cout << "Alloction Error.\n";
	} while(p);

	getch();
	return 0;
}
