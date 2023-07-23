#include <iostream>
#include <conio.h>

using namespace std;

ostream &Setup(ostream &stream)
{
	stream.width(10);
	stream.precision(4);
	stream.fill('*');

	return stream;
}

int main()
{
	cout << Setup << 123.123456;

	getch();
	return 0;
}
