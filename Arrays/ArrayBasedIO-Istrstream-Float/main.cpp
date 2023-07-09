#include <iostream>
#include <conio.h>
#include <strstream>

using namespace std;

int main()
{
	float f;
	char s[] = "1234.567";
	istrstream istr(s);

	istr >> f;
	cout << "Converted from= " << f << "\n";

	getch();
	return 0;
}
