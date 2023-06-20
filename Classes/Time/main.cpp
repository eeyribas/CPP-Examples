#include <iostream>
#include <conio.h>
#include "timeclass.h"

using namespace std;

void Increase(TimeClass &, const int);

int main()
{
    TimeClass t;

	t.SetHour(17);
	t.SetMinute(34);
	t.SetSecond(25);
	cout << "First :\n"
		 << "Hour : " << t.ReadHour() << "  Minute : " << t.ReadMinute()
		 << "  Second : " << t.ReadSecond();

	t.SetHour(234);
	t.SetMinute(43);
	t.SetSecond(6373);
	cout << "\n\nInvalid values :\n Hour : " <<
		 t.ReadHour() << "   Minute : " << t.ReadMinute()
		 << "   Second : " << t.ReadSecond() << "\n\n";

	t.SetTime(11, 58, 0);
	Increase(t, 3);

	getch();
    return 0;
}

void Increase(TimeClass &tt, const int number)
{
	cout << "minute " << number << "number.\n First time : ";
	tt.WriteStandart();

	for(int i = 0; i < number; i++) {
		tt.SetMinute((tt.ReadMinute() + 1) % 60);

		if(tt.ReadMinute() == 0)
			tt.SetHour((tt.ReadMinute() + 1) % 24);

		cout << "\nMinute + 1: ";
		tt.WriteStandart();
	}
	cout << endl;
}
