#include <iostream>
#include <conio.h>
#include <strstream>

using namespace std;

int main()
{
	char buf[255];
	ostrstream ostr(buf, sizeof buf);

	ostr << "Array Based I/O\n";
	ostr << "Normal I/O\n" << 100;
	ostr << "'  '" << 123 << "\n\n";

	ostr << hex << 100 <<"\n";
	ostr.setf(ios::scientific);
	ostr << dec << 123.23;
	ostr << endl << ends;
	cout << buf;

	getch();
	return 0;
}
