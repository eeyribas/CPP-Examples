#include <iostream>
#include <cctype>
#include <conio.h>

using namespace std;

istream &FindAlpha(istream &stream)
{
	char ch;
	do {
		stream.get(ch);
	} while (!isalpha(ch));

	return stream;
}

int main()
{
	char str[80];
	cin >> FindAlpha >> str;
	cout << str << "\n";

	getch();
	return 0;
}
