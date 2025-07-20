#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	cout << "Single Or Twin Program" << endl;

	int i;
	cout << "Enter number = ";
	cin >> i;
	if (i % 2 == 0)
		cout << "\nTwin." << endl;
	else
		cout << "\nSingle." << endl;

	getch();
	return 0;
}
