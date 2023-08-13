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

	friend Coordinaat operator--(Coordinaat obj);
	friend Coordinaat operator--(Coordinaat &obj, int notused);
};

Coordinaat operator--(Coordinaat obj)
{
	obj.x--;
	obj.y--;

	return obj;
}

Coordinaat operator--(Coordinaat &obj, int notused)
{
	obj.x--;
	obj.y--;

	return obj;
}

int main()
{
	Coordinaat obj(10, 10);
	int x, y;

	--obj;
	obj.GetXY(x, y);
	cout << "(-- ob1) X= " << x << ", Y= " << y << "\n";

	obj--;
	obj.GetXY(x, y);
	cout << "(ob1 --) X= " << x << ", Y= " << y << "\n";

	getch();
	return 0;
}
