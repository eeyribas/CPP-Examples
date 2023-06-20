#include<iostream>
#include<conio.h>

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

	friend Coordinaat operator*(Coordinaat obj, int i);
	friend Coordinaat operator*(int i, Coordinaat obj);
};

Coordinaat operator*(Coordinaat obj, int i)
{
	Coordinaat temp;
	temp.x = obj.x * i;
	temp.y = obj.y * i;

	return temp;
}

Coordinaat operator*(int i, Coordinaat obj)
{
	Coordinaat temp;
	temp.x = i * obj.x;
	temp.y = i * obj.y;

	return temp;
}

int main()
{
	Coordinaat obj_1(10, 10), obj_2;
	int x, y;

	obj_2 = obj_1 * 2;
	obj_2.GetXY(x, y);
	cout << "(ob1 * 2) X= " << x << ", Y= " << y << "\n";

	obj_2 = 3 * obj_2;
	obj_2.GetXY(x, y);
	cout << "(3 * ob2) X= " << x << ", Y= " << y << "\n";

	getch();
	return 0;
}
