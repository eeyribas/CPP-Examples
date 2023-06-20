#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main()
{
	char str[80];
	cout << "Enter name = ";
	cin.getline(str, 79);
	cout << str << "\n";

	getch();
	return 0;
}
