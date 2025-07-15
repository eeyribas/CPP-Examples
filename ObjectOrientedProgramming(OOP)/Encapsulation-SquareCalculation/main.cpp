#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

class SquareClass
{
public:
	SquareClass(int n)
	{
		i = n;
	}

	void SetI(int n)
	{
        i = n;
	}

	int GetI()
	{
		return i;
	}

	int Calc()
	{
	    return sqrt(i);
	}

private:
    int i;
};

int main()
{
	SquareClass sq(10);
	sq.SetI(100);
	cout << "A Value : " << sq.GetI() << "\n";
	cout << "Square : " << sq.Calc();

	getch();
	return 0;
}
