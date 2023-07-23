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

	Coordinaat operator++();
};

Coordinaat Coordinaat::operator++()
{
	x++;
	y++;
	return *this;
}

int main()
{
	Coordinaat coord(10, 10);
	int x, y;
	++coord;
	coord.GetXY(x, y);
	cout << "(++coord) X= " << x << ", Y= " << y << "\n";

	getch();
	return 0;
}
