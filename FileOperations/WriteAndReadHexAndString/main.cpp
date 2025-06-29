#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
	ofstream f_out("test");
	if (!f_out) {
		cout << "Cannot open output file.\n";
		return 1;
	}

	f_out << "Hello" << endl;
	f_out << 100 << ' ' << hex << 100 << endl;
	f_out.close();

	ifstream f_in("test");
	if (!f_in) {
		cout << "Cant open input file." << endl;
		return 1;
	}

	char str[80];
	int i;
	f_in >> str >> i;
	cout << str << ' ' << i << endl;
	f_in.close();

	getch();
	return 0;
}
