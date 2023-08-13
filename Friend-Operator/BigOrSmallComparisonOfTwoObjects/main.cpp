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

	int operator>(Coordinaat obj);
	int operator<(Coordinaat obj);
};

int Coordinaat::operator>(Coordinaat obj)
{
	return x > obj.x && y > obj.y;
}

int Coordinaat::operator<(Coordinaat obj)
{
	return (x < obj.x) && (y < obj.y);
}

int main()
{
	Coordinaat obj_1(10, 10), obj_2(5, 3);

	if(obj_1 > obj_2)
		cout << "obj_1 > obj_2 \n";
	else
		cout << "obj_1 <= obj_2 \n";

    if(obj_1 < obj_2)
        cout << "obj_1 < obj_2 \n";
    else
        cout << "obj_1 >= obj_2 \n";

    getch();
    return 0;
}
