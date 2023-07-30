#include <iostream>
#include <conio.h>
#include "point.h"

using namespace std;

int main()
{
    Point n(72, 115);

	cout << "X : " << n.ReadX() << "\nY : " << n.ReadY();
	n.Setting(10, 10);
	cout << "\n\nNew :  " << n << endl;

	getch();
    return 0;
}
