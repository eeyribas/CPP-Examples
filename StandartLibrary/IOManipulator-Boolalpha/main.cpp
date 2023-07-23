#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	cout << "First = ";
	bool b = true;
	cout << b << " ";
	b = false;
	cout << b << endl;

	cout << "After = ";
	b = true;
	cout << boolalpha << b << " ";
	b = false;
	cout << b << endl;

	cout << "Enter bool value = ";
	cin >> boolalpha >> b;
	cout << b << "\n";

	getch();
	return 0;
}
