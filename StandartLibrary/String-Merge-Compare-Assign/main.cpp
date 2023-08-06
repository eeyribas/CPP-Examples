#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	string str_1("demos string");
	string str_2("string teow");

	string str_3 = str_1;
	cout << str_1 << "  " << str_3 << "  " << "\n";

	str_3 = str_1 + str_2;
	cout << str_3 << "\n";

	if(str_3 > str_1)
		cout << "str_3 > str_1\n";
	if(str_3 == str_1 + str_2)
		cout << "str_3 == str_1 + str_2\n";

	str_1 = "this a susss";
	cout << str_1 << "\n\n";

	string str_4(str_1);
	cout << str_4 << "\n\n";

	cout << "string = ";
	cin >> str_4;
	cout << str_4;

	getch();
	return 0;
}
