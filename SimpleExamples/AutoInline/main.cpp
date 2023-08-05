#include <iostream>
#include <conio.h>

using namespace std;

class Sample
{
	int i, j;

public:
	Sample(int a, int b)
	{
	    i = a;
	    j = b;
	}

	int Divisible()
	{
		return !(i%j);
	}
};

int main()
{
	Sample obj_1(10, 2), obj_2(10, 3);

	if(obj_1.Divisible())
		cout << "10 is divisible by 2.\n";

	if(obj_2.Divisible())
		cout << "10 is divisible by 3.\n";

	getch();
	return 0;
}
