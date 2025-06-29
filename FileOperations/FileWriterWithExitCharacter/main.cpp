#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
	if (argc != 2) {
		cout << "Usage WRITE<filename>\n";
		return 1;
	}

	ofstream out(argv[1]);
	if (!out) {
		cout << "Cant open output file.\n";
		return 1;
	}

	cout << "Press $ to exit" << endl;
	char str[80];
	do {
		cout << " : ";
		cin >> str;
		out << str << endl;
	} while (*str != '$');
	out.close();

	getch();
	return 0;
}
