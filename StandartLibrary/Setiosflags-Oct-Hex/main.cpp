#include <iostream>
#include <conio.h>
#include<iomanip>

using namespace std;
using std::ios;
using std::setiosflags;
using std::oct;
using std::hex;

int main()
{
	int x = 100;
	cout << setiosflags(ios::showbase) << "Print\n"
		 << x << '\n' << oct << x << '\n' << hex << x << endl;

	getch();
	return 0;
}
