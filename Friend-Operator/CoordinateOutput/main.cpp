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

	friend ostream &operator<<(ostream &stream, Coordinaat coord);

private:
    int x, y;
};

ostream &operator<<(ostream &stream, Coordinaat coord)
{
	stream << coord.x << ", " << coord.y << "\n";

	return stream;
}

int main()
{
	Coordinaat a(1, 1), b(2, 23);
	cout << a << b;

	getch();
	return 0;
}
