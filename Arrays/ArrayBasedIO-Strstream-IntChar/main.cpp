#include <iostream>
#include <conio.h>
#include <strstream>

using namespace std;

int main()
{
	char io_buf[255];
	strstream io_str(io_buf, sizeof io_buf);

	io_str << "This a test\n";
	io_str << 100 << hex<< '  ' << 100 << ends;

	char str[80];
	int i;
	io_str.getline(str, 79);
	io_str >> dec >> i;

	cout << str << '  ' << i << '  ';
	io_str >> hex >> i;
	cout << hex << i;

	getch();
	return 0;
}
