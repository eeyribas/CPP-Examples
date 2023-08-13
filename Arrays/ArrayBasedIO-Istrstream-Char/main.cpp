#include <iostream>
#include <conio.h>
#include <strstream>

using namespace std;

int main()
{
	char buf[] = "hello 100 123.2";
	istrstream istr(buf);
	char c;

	while(!istr.eof()){
		istr.get(c);
		if(!istr.eof())
			cout << c;
	}

	getch();
	return 0;
}
