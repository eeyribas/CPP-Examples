#include <iostream>
#include <conio.h>

using namespace std;

int Calculation(int base, int exp);

class Power
{
public:
	Power(int b, int e)
	{
		base = b;
		exp = e;
	}

	operator int()
	{
		return Calculation(base, exp);
	}

private:
    int base;
	int exp;
};

int Calculation(int base, int exp)
{
    int tmp = 0;
	for (tmp = 1; exp; exp--)
		tmp = tmp * base;

	return tmp;
}

int main()
{
	Power o_1(2, 3), o_2(3, 3);
	int result = o_1;
	cout << result << "\n";
	result = o_2;
	cout << result << "\n";
	cout << o_1 + 100 << "\n";

	getch();
	return 0;
}
