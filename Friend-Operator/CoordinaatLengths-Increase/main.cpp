#include<iostream>
#include<conio.h>

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

	friend Coordinaat operator+(Coordinaat obj, int i);
	friend Coordinaat operator+(int i, Coordinaat obj);
};

Coordinaat operator+(Coordinaat obj, int i)
{
	Coordinaat temp;
	temp.x = obj.x + i;
	temp.y = i + obj.y;

	return temp;
}

Coordinaat operator+(int i, Coordinaat obj)
{
	Coordinaat temp;
	temp.x = obj.x + i;
	temp.y = i + obj.y;

	return temp;
}

int main()
{
    Coordinaat obj(10, 10);
	int x, y;

	obj = obj + 10;
	obj.GetXY(x, y);
	cout << "(o1 + 10) X= " << x << ", Y= " << y << "\n";

	obj = obj + 20;
	obj.GetXY(x, y);
	cout << "(o1 + 20) X= " << x << ", Y= " << y << "\n";

	getch();
	return 0;
}
