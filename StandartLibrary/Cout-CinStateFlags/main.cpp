#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x;

	cout << "First : " << "\ncin.rdstate() : " << cin.rdstate()
		 << "\ncin.eof() : " << cin.eof() << "\ncin.fail() : " << cin.fail()
		 << "\ncin.bad() : " << cin.bad() << "\ncin.good() : " << cin.good()
		 << "\n\nEnter number : ";
	cin >> x;

	cout << "\nAfter : " << "\ncin.rdstate() : " << cin.rdstate()
		 << "\ncin.eof() : " << cin.eof() << "\ncin.eof() : " << cin.eof()
		 << "\ncin.fail() : " << cin.fail() << "\ncin.bad() : " << cin.bad()
		 << "\ncin.good() : " << cin.good() << "\n\n";

	cin.clear();
	cout << "\ncin.clear() : " << "\ncin.fail() : " << cin.fail()
         << "\ncin.good() : " << cin.good() << endl;

	getch();
	return 0;
}
