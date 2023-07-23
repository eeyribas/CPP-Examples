#include <iostream>
#include <conio.h>

using namespace std;

ostream &SetHex(ostream &stream)
{
	stream.unsetf(ios::dec | ios::oct);
	stream.setf(ios::hex | ios::uppercase | ios::showbase);

	return stream;
}

ostream &Reset(ostream &stream)
{
	stream.unsetf(ios::hex | ios::uppercase | ios::showbase);
	stream.setf(ios::dec);

	return stream;
}

int main()
{
	cout << SetHex << 100 << "\n";
	cout << Reset << 100 << "\n";

	getch();
	return 0;
}
