#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	double feet;

	do {
		cout << "Enter feet (press 0 to exit) = ";
		cin >> feet;
		cout << feet * 12 << "  inc\n";
	} while(feet != 0);

	getch();
	return 0;
}
