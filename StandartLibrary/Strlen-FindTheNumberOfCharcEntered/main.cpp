#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

int main()
{
	char s[80];

	cout << "Enter characters = ";
	cin >> s;
	cout << "Length = " << strlen(s) << "\n";

	getch();
	return 0;
}
