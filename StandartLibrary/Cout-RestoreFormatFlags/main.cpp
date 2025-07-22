#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	ios::fmtflags f = cout.flags();
	cout.unsetf(ios::dec);
	cout.setf(ios::showbase | ios::hex);
	cout << 100 << "\n";
	cout.flags(f);

	getch();
	return 0;
}
