#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int selection;
	do
    {
		cout << "1 is selected.";
		cout << "\n2 is selected.";
		cout << "\n3 is selected.";
		cout << "\n4 is selected.";
		cout << "\n\nSelection = ";
		cin >> selection;
	}while(selection != 4);

	getch();
	return 0;
}
