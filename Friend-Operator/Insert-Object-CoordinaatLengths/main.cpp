#include <iostream>
#include <conio.h>

using namespace std;

class Coordinaat
{
public:
    int x, y;

	Coordinaat(){
		x = 0;
		y = 0;
	}

	Coordinaat(int i, int j){
		x = i;
		y = j;
	}

	friend ostream &operator<<(ostream &stream, Coordinaat obj);
};

ostream &operator<<(ostream &stream, Coordinaat obj)
{
	stream << obj.x << ", " << obj.y << "\n";

	return stream;
}

int main()
{
	Coordinaat a(1, 1), b(2, 23);
	cout << a << b;

	getch();
	return 0;
}
