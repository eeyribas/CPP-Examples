#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int number, highest_number = -1;
	cout << "Enter number = ";
	while (cin >> number) {
		if (number > highest_number)
			highest_number = number;
		cout << "Enter number (press ^Z to exit) = ";
	}

	cout << "\n\nHighest number = " << highest_number << endl;

	getch();
	return 0;
}
