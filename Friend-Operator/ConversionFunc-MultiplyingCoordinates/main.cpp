#include <iostream>
#include <conio.h>

using namespace std;

class Coordinaat
{
	int x, y;

public:
    Coordinaat(int i, int j)
    {
		x = i;
		y = j;
	}

	operator int()
	{
		return x * y;
	}
};

int main()
{
	Coordinaat o_1(2, 3), o_2(3, 4);
	int i;

	i = o_1;
	cout << i << "\n";

	i = 100 + o_2;
	cout << i << "\n";

	getch();
	return 0;
}
