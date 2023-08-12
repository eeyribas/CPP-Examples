#include <iostream>
#include <conio.h>
#include "time.h"

using namespace std;

int main()
{
    Time t;

	t.SetHour(18).SetMinute(30).SetSecond(22);
	cout << "Short time = ";
	t.PrintShort();
	cout << " Standart time = ";
	t.PrintStandart();

	cout << "\n\nNew standart time = ";
	t.SetTime(20, 20, 20).PrintStandart();
	cout << endl;

	getch();
    return 0;
}
