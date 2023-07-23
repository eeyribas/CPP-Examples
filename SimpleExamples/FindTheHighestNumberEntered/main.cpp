#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int number, highestNumber = -1;

	cout << "Enter number = ";
	while(cin >> number) {
		if(number > highestNumber)
			highestNumber = number;

		cout << "Enter number (press ^Z to exit) = ";
	}

	cout << "\n\nHighest number = " << highestNumber << endl;

	getch();
	return 0;
}
