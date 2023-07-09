#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

class Date
{
	int day, month, year;

public:
	Date(char *strm);
	Date(int m, int d, int y)
	{
		month = m;
		day = d;
		year = y;
	}

	void Show()
	{
		cout << month << '/' << day << '/';
		cout << year << "\n";
	}
};

Date::Date(char *ptr)
{
	sscanf(ptr, "%d%*c%d%*c%d", &month, &day, &year);
}

int main()
{
	Date s_date("10/12/1992");
	Date i_date(12, 11, 1993);

	s_date.Show();
	i_date.Show();

	getch();
	return 0;
}
