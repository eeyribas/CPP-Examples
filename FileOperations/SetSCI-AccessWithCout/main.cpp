#include <iostream>
#include <conio.h>

using namespace std;

ostream &SetSCI(ostream &stream)
{
	stream.setf(ios::scientific | ios::uppercase);

	return stream;
}

int main()
{
	double f = 123.23;
	cout << SetSCI << f;
	cout << "\n";

	getch();
	return 0;
}
