#include <iostream>
#include <conio.h>

using namespace std;

void Date(char *date);
void Date(int month, int day, int year);

int main()
{
	Date("8/23/192");
	Date(8, 23, 19);

	getch();
	return 0;
}

void Date(char *date)
{
	cout << "Date = " << date << "\n\n";
}

void Date(int month, int day, int year)
{
	cout << "Date = " << month << "/";
	cout << day << "/" << year << "\n\n" << endl;
}
