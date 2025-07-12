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

	int operator==(Coordinaat obj);
	int operator&&(Coordinaat obj);

private:
    int x, y;
};

int Coordinaat::operator==(Coordinaat obj)
{
	return x == obj.x && y == obj.y;
}

int Coordinaat::operator&&(Coordinaat obj)
{
	return (x && obj.x) && (y && obj.y);
}

int main()
{
	Coordinaat obj_1(10, 10), obj_2(5, 3), obj_3(10, 10), obj_4(0, 0);

	if (obj_1 == obj_2)
		cout << "obj_1 and obj_2 are equal\n";
	else
		cout << "obj_1 and obj_2 are different\n";

    if (obj_1 == obj_3)
        cout << "obj_1 and obj_3 are equal\n";
    else
        cout << "obj_1 and obj_3 are different\n";

    if (obj_1 && obj_2)
        cout << "True\n";
    else
        cout << "False\n";

    if (obj_1 && obj_4)
        cout << "True\n";
    else
        cout << "False\n";

    getch();
    return 0;
}
