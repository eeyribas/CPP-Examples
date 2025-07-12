#include <iostream>
#include <conio.h>

using namespace std;

class Coordinaat
{
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

private:
    int x, y;
};

int main()
{
	Coordinaat o_1(2, 3), o_2(3, 4);
	int result = o_1;
	cout << result << "\n";
	result = 100 + o_2;
	cout << result << "\n";

	getch();
	return 0;
}
