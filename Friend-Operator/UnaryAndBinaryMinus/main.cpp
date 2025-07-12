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

	Coordinaat operator-(Coordinaat coord);
	Coordinaat operator-();

private:
    int x, y;
};

Coordinaat Coordinaat::operator-(Coordinaat coord)
{
	Coordinaat result;
	result.x = x - coord.x;
	result.y = y - coord.y;

	return result;
}

Coordinaat Coordinaat::operator-()
{
	x = -x;
	y = -y;

	return *this;
}

int main()
{
	Coordinaat coord_1(10, 10), coord_2(5, 7);
	int x, y;

	coord_1 = coord_1 - coord_2;
	coord_1.GetXY(x, y);
	cout << "(coord_1 - coord_2) X = " << x << ", Y = " << y << "\n";
	coord_1= -coord_1;
	coord_1.GetXY(x, y);
	cout << "(-coord_1) X = " << x << ", Y = " << y << "\n";

	getch();
	return 0;
}
