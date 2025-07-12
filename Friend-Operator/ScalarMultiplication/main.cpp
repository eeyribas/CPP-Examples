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

	friend Coordinaat operator*(Coordinaat obj, int i);
	friend Coordinaat operator*(int i, Coordinaat obj);

private:
    int x, y;
};

Coordinaat operator*(Coordinaat obj, int i)
{
	Coordinaat coord;
	coord.x = obj.x * i;
	coord.y = obj.y * i;

	return coord;
}

Coordinaat operator*(int i, Coordinaat obj)
{
	Coordinaat coord;
	coord.x = i * obj.x;
	coord.y = i * obj.y;

	return coord;
}

int main()
{
	Coordinaat obj_1(10, 10), obj_2;
	int x, y;

	obj_2 = obj_1 * 2;
	obj_2.GetXY(x, y);
	cout << "(obj_1 * 2) X = " << x << ", Y = " << y << "\n";
	obj_2 = 3 * obj_2;
	obj_2.GetXY(x, y);
	cout << "(3 * obj_2) X = " << x << ", Y = " << y << "\n";

	getch();
	return 0;
}
