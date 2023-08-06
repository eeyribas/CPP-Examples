#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

class TimeAndDate
{
	time_t sys_time;

public:
	TimeAndDate(time_t t);
	void Show();
};

TimeAndDate::TimeAndDate(time_t t)
{
	sys_time = t;
}

void TimeAndDate::Show()
{
	cout << ctime(&sys_time);
}

int main()
{
	time_t x;
	x = time(NULL);
	TimeAndDate obj(x);
	obj.Show();

	getch();
	return 0;
}
