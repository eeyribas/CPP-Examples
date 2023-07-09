#include <iostream>
#include <conio.h>
#include <strstream>

using namespace std;

int main()
{
	char buf[] = "Hello 100 123.123";

	istrstream istr(buf);
	int i;
	char str[80];
	float f;
	char c;

	istr >> str >> f >> c;
	cout << str << ' ' << i << ' ' << f << ' ' << c << "\n";

	getch();
	return 0;
}
