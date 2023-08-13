#include <iostream>
#include <conio.h>

using namespace std;

int P(int base, int exp);

class Pwr
{
	int base;
	int exp;

public:
	Pwr(int b, int e){
		base = b;
		exp = e;
	}

	operator int(){
		return P(base, exp);
	}
};

int P(int base, int exp)
{
	for(int temp = 1; exp; exp--)
		temp = temp * base;

	return temp;
}

int main()
{
	Pwr o_1(2, 3), o_2(3, 3);
	int result = o_1;
	cout << result << "\n";
	result = o_2;
	cout << result << "\n";
	cout << o_1 + 100 << "\n";

	getch();
	return 0;
}
