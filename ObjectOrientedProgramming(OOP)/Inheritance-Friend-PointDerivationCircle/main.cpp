#include <iostream>
#include <conio.h>
#include "point.h"
#include "circle.h"

using namespace std;

int main()
{
    Circle d(2.5, 37, 43);

	cout << "X : " << d.ReadX() << "\nY : " << d.ReadY()
		 << "\nr : " << d.ReadR();

	d.SetR(4.25);
	d.Setting(2, 2);
	cout << "\n\nNew : \n" << d << "\nArea : " << d.Area() << '\n';

	Point &nref = d;
	cout << "\nPoint : " << nref << endl;

	getch();
    return 0;
}
