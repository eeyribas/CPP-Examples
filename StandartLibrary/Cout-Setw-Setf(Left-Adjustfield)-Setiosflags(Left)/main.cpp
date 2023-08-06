#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
using std::ios;
using std::setw;
using std::setiosflags;
using std::resetiosflags;

int main()
{
	int x = 12345;

	cout << "Setw(10) : " << setw(10) << x << "\nLeft : " << setw(10);
	cout.setf(ios::left, ios::adjustfield);
	cout << x;
	cout.unsetf(ios::left);
	cout << "\nIos : " << setw(10) << setiosflags(ios::left) << x << "\nResetiosflags : "
         << setw(10) << resetiosflags(ios::left) << x << endl;

	getch();
	return 0;
}
