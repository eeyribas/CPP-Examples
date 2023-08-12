#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	cout.width(10);
	cout << "Hello" << "\n";
	cout.fill('%');
	cout.width(10);
	cout << "Hello" << "\n";
	cout.setf(ios::left);
	cout.width(10);
	cout << "Hello" << "\n";

	cout.width(10);
	cout.precision(10);
	cout << 123.234567 << "\n";
	cout.width(10);
	cout.precision(6);
	cout << 123.234567 << "\n";

	getch();
	return 0;
}
