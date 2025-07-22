#include <iostream>
#include <iomanip>
#include <cmath>
#include <conio.h>

using namespace std;
using std::ios;

int main()
{
	cout << "Raw : " << 9.9900 << "\n";
	cout.setf(ios::showpoint);
	cout << "Setf : " << 9.9900 << endl;

	getch();
	return 0;
}
