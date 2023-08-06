#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
using std::ios;
using std::setiosflags;
using std::setw;

int main()
{
	cout << setiosflags(ios::internal | ios::showpos) << setw(10) << 123 << endl;

	getch();
	return 0;
}
