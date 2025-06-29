#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
	if (argc != 2) {
		cout << "Not Use.\n";
		return 1;
	}

	ifstream in(argv[1], ios::in | ios::binary);
	if (!in) {
		cout << "Not Found.\n";
		return 1;
	}

	char ch;
	while (!in.eof()) {
		in.get(ch);
		cout << ch;
	}
	in.close();

	getch();
	return 0;
}
