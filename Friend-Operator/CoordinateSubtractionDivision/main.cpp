#include <iostream>
#include <conio.h>

using namespace std;

class Coordinaat
{
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

	friend Coordinaat operator-(Coordinaat obj_1, Coordinaat obj_2);
	friend Coordinaat operator/(Coordinaat obj_1, Coordinaat obj_2);

private:
    int x, y;
};

Coordinaat operator-(Coordinaat obj_1, Coordinaat obj_2)
{
	Coordinaat coord;
	coord.x = obj_1.x - obj_2.x;
	coord.y = obj_1.y - obj_2.y;

	return coord;
}

Coordinaat operator/(Coordinaat obj_1, Coordinaat obj_2)
{
	Coordinaat coord;
	coord.x = obj_1.x / obj_2.x;
	coord.y = obj_1.y / obj_2.y;

	return coord;
}

int main()
{
	Coordinaat obj_1(10, 10), obj_2(5, 3), obj_3;
	int x, y;

	obj_3 = obj_1 - obj_2;
	obj_3.GetXY(x, y);
	cout << "(obj_1 - obj_2) X = " << x << ", Y = " << y << "\n";
	obj_3 = obj_1 / obj_2;
	obj_3.GetXY(x, y);
	cout << "(obj_1 / obj_2) X = " << x << ", Y = " << y << "\n";

	getch();
	return 0;
}
