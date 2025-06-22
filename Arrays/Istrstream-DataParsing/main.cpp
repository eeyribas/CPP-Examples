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
	char ch;
	istr >> str >> f >> ch;
	cout << str << ' ' << i << ' ' << f << ' ' << ch << "\n";

	getch();
	return 0;
}
