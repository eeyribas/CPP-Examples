#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
	ofstream out("phone");
	if (!out) {
		cout << "No Records found.\n";
		return 1;
	}

    out << "Isaac Newton 415 555-3423" << endl;
	out << "Roberd Goddard 231 555-2312" << endl;
	out << "Enrico Fermi 202 555-1111" << endl;
	out.close();

	getch();
	return 0;
}
