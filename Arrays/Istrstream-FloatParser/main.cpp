#include <iostream>
#include <conio.h>
#include <strstream>

using namespace std;

int main()
{
	char str[] = "1234.567";
	istrstream istr(str);

	float number;
	istr >> number;
	cout << "Converted from = " << number << "\n";

	getch();
	return 0;
}
