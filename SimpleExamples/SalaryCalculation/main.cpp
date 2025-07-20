#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int wage, hour;
	cout << "Enter sum hours = ";
	cin >> hour;
	cout << "Enter the hourly wage = ";
	cin >> wage;
	cout << "Sum salary = " << hour * wage;

	getch();
	return 0;
}
