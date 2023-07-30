#include <iostream>
#include <conio.h>

using namespace std;

class Date
{
public:
	Date(int = 1, int = 1, int = 1990);
	void Write();

private:
	int month;
	int day;
	int year;
};

Date::Date(int a, int b, int c)
{
	month = a;
	day = b;
	year = c;
}

void Date::Write()
{
	cout << month << "--" << day << "--" << year;
}

int main()
{
	Date date_1(7, 4, 1993), date_2;
	cout << "date_1 = ";
	date_1.Write();
	cout << "\ndate_2 = ";
	date_2.Write();

	date_2 = date_1;
	cout << "\n\nCopy result = ";
	date_2.Write();
	cout << endl;

	getch();
	return 0;
}
