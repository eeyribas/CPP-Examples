#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	cout.setf(ios::left);
	cout.precision(2);
	cout.fill('*');
	cout.width(20);
	cout << 100.5347 << "\n";

	getch();
	return 0;
}
