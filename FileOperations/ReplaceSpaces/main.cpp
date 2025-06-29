#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
	if (!argc) {
        cout << "Error!";
		return 1;
	}

	ifstream f_in(argv[1]);
	ofstream f_out(argv[2]);
	if (!f_out) {
		cout << "Error!";
		return 1;
	}
	if (!f_in) {
		cout << "Not find file.\n";
		return 1;
	}

	char ch;
	f_in.unsetf(ios::skipws);
	while (!f_in.eof()) {
		f_in >> ch;
		if (ch == ' ')
			ch = '|';
		if (!f_in.eof())
			f_out << ch;
	}
	f_in.close();
	f_out.close();

	getch();
	return 0;
}
