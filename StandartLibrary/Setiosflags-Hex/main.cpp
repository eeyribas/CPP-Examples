#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
using std::setiosflags;
using std::ios;
using std::hex;

int main()
{
	cout << setiosflags(ios::uppercase) << "Print\n"
		 << 4.345e10 << '\n' << hex << 123456789 << endl;

	getch();
	return 0;
}
