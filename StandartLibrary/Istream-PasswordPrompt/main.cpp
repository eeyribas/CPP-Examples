#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

istream &GetPass(istream &stream)
{
	cout << '\a';
	cout << "Enter password = ";

	return stream;
}

int main()
{
	char pw[80];
	do {
		cin >> GetPass >> pw;
	} while (strcmp(pw, "password"));
	cout << "Login complete\n";

	getch();
	return 0;
}
