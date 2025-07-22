#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	cout.setf(ios::showpoint | ios::uppercase | ios::scientific);
	cout << 100.0;

	getch();
	return 0;
}
