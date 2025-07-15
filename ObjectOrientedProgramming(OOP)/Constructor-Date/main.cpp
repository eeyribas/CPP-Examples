#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

class Date
{
public:
	Date(char *ptr)
	{
	   sscanf(ptr, "%d%*c%d%*c%d", &month, &day, &year);
	}

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

private:
    int day, month, year;
};

int main()
{
	Date s_date("10/12/1992");
	s_date.Show();
	Date i_date(12, 11, 1993);
	i_date.Show();

	getch();
	return 0;
}
