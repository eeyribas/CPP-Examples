#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	cout.unsetf(ios::dec);
	cout.setf(ios::uppercase | ios::showbase | ios::hex);
	cout << 88 << "\n";

	cout.unsetf(ios::uppercase);
	cout << 88 << "\n";

	getch();
	return 0;
}
