#include <iostream>
#include <conio.h>

using namespace std;

istream &SkipChar(istream &stream)
{
	char c;
	for (int i = 0; i < 10; i++)
		stream >> c;

	return stream;
}

int main()
{
	char str[80];
	cout << "Enter some chars = ";
	cin >> SkipChar >> str;
	cout << str << "\n";

	getch();
	return 0;
}
