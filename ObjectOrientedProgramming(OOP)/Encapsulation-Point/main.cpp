#include <iostream>
#include <conio.h>
#include "point.h"

using namespace std;

int main()
{
    Point point(72, 115);
	cout << "X : " << point.ReadX()
         << "\nY : " << point.ReadY();
	point.Setting(10, 10);
	cout << "\n\nNew :  " << point << endl;

	getch();
    return 0;
}
