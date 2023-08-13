#include <iostream>
#include <conio.h>

using namespace std;

class Coordinaat
{
	int x, y;

public:
	Coordinaat(){
		x = 0;
		y = 0;
	}

	Coordinaat(int i, int j){
		x = i;
		y = j;
	}

	void GetXY(int &i, int &j){
		i = x;
		j = y;
	}

	Coordinaat operator-(Coordinaat coord);
	Coordinaat operator-();
};

Coordinaat Coordinaat::operator-(Coordinaat coord)
{
	Coordinaat temp;
	temp.x = x - coord.x;
	temp.y = y - coord.y;

	return temp;
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
	cout << "(coord_1 - coord_2) X= " << x << ", Y= " << y << "\n";

	coord_1= -coord_1;
	coord_1.GetXY(x, y);
	cout << "(-coord_1) X= " << x << ", Y= " << y << "\n";

	getch();
	return 0;
}
