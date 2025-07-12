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

	friend Coordinaat operator+(Coordinaat obj, int i);
	friend Coordinaat operator+(int i, Coordinaat obj);

private:
    int x, y;
};

Coordinaat operator+(Coordinaat obj, int i)
{
	Coordinaat coord;
	coord.x = obj.x + i;
	coord.y = i + obj.y;

	return coord;
}

Coordinaat operator+(int i, Coordinaat obj)
{
	Coordinaat coord;
	coord.x = obj.x + i;
	coord.y = i + obj.y;

	return coord;
}

int main()
{
    Coordinaat obj(10, 10);
	int x, y;

	obj = obj + 10;
	obj.GetXY(x, y);
	cout << "(obj + 10) X = " << x << ", Y = " << y << "\n";
	obj = obj + 20;
	obj.GetXY(x, y);
	cout << "(obj + 20) X = " << x << ", Y = " << y << "\n";

	getch();
	return 0;
}
