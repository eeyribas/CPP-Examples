#include <iostream>
#include <conio.h>
#include "point.h"
#include "circle.h"

using namespace std;

int main()
{
    Circle circle(2.5, 37, 43);
	cout << "X : " << circle.ReadX() << "\nY : " << circle.ReadY()
		 << "\nr : " << circle.ReadR();

	circle.SetR(4.25);
	circle.Setting(2, 2);
	cout << "\n\nNew : \n" << circle << "\nArea : " << circle.Area() << '\n';

	Point &point = circle;
	cout << "\nPoint : " << point << endl;

	getch();
    return 0;
}
