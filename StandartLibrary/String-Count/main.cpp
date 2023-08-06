#include <iostream>
#include <conio.h>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string str;
	cout << "Enter string = ";
	cin >> str;

	int i = count(str.begin(), str.end(), 'e');
	cout << i << "\n";

	getch();
	return 0;
}
