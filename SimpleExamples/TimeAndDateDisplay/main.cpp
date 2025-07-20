#include <iostream>
#include <ctime>
#include <conio.h>

using namespace std;

class TimeAndDate
{
public:
	TimeAndDate(time_t t);

	void Show();

private:
    time_t time;
};

TimeAndDate::TimeAndDate(time_t t)
{
    time = t;
}

void TimeAndDate::Show()
{
	cout << ctime(&time);
}

int main()
{
	time_t x = time(NULL);
	TimeAndDate obj(x);
	obj.Show();

	getch();
	return 0;
}
