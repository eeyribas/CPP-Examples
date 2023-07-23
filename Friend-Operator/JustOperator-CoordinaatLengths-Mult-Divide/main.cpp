#include <iostream>
#include <conio.h>

using namespace std;

class Coordinaat
{
	int x, y;

public:
	Coordinaat()
	{
		x = 0;
		y = 0;
	}

	Coordinaat(int i, int j)
	{
		x = i;
		y = j;
	}

	void GetXY(int &i, int &j)
    {
		i = x;
		j = y;
	}

	Coordinaat operator*(Coordinaat obj);
	Coordinaat operator/(Coordinaat obj);
};

Coordinaat Coordinaat::operator*(Coordinaat obj)
{
	Coordinaat temp;
	temp.x = x * obj.x;
	temp.y = y * obj.y;

	return temp;
}

Coordinaat Coordinaat::operator/(Coordinaat obj)
{
	Coordinaat temp;
	temp.x = x / obj.x;
	temp.y = y / obj.y;

	return temp;
}

int main()
{
	Coordinaat obj_1(10, 10), obj_2(5, 3), obj_3;
	int x, y;

	obj_3 = obj_1 * obj_2;
	obj_3.GetXY(x, y);
	cout << "(obj_1 * obj_2)  X = " << x << ", Y = " << y << "\n";

	obj_3 = obj_1 / obj_2;
	obj_3.GetXY(x, y);
	cout << "(obj_1 / obj_2)  X = " << x << ", Y = " << y << "\n";

	getch();
	return 0;
}
