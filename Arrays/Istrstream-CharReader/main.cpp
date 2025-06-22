#include <iostream>
#include <conio.h>
#include <strstream>

using namespace std;

int main()
{
	char buf[] = "hello 100 123.2";
	istrstream istr(buf);
	char ch;

	while (!istr.eof()) {
        istr.get(ch);
		if (!istr.eof())
			cout << ch;
	}

	getch();
	return 0;
}
