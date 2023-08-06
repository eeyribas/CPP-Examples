#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	string str_1("shshs");
	string str_2("loknsh");
	cout << "Values\n";
	cout << "s_1 = " << str_1 << "\n";
	cout << "s_2 = " << str_2 << "\n\n";

	cout << "Insert\n";
	str_1.insert(5, str_2);
	cout << str_1 << "\n\n";

	cout << "Erase\n";
	str_1.erase(5, 7);
	cout << str_1 << "\n\n";

	cout << "Replace\n";
	str_1.replace(5, 2, str_2);
	cout << str_1 << endl;

	getch();
	return 0;
}
