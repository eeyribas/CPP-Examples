#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
using std::ios;
using std::setw;
using std::hex;
using std::dec;
using std::setfill;

int main()
{
	int x = 1000;

	cout << x << " right and left align as int \n and is printed as an internal aligned hexadecimal number.\n"
		 << "Using the default padding character (space) : \n";

	cout.setf(ios::showbase);
	cout << setw(10) << x << '\n';
	cout.setf(ios::left, ios::adjustfield);
	cout << setw(10) << x << '\n';
	cout.setf(ios::internal, ios::adjustfield);
	cout << setw(10) << hex << x << '\n';

	cout << "\n\nUsing various padding characters :\n";
	cout.setf(ios::right, ios::adjustfield);
	cout.fill('*');
	cout << setw(10) << dec << x << '\n';
	cout.setf(ios::left, ios::adjustfield);
	cout << setw(10) << setfill('%') << x << '\n';
	cout.setf(ios::internal, ios::adjustfield);
	cout << setw(10) << setfill('^') << hex << x << endl;

	getch();
	return 0;
}
