#include <iostream>
#include <conio.h>

using namespace std;

class Sample
{
	int i, j;

public:
	Sample(int a, int b);
	int Divisible();
};

Sample::Sample(int a, int b)
{
	i = a;
	j = b;
}

int Sample::Divisible()
{
	return !(i % j);
}

int main()
{
	Sample obj_1(10, 2), obj_2(10, 3);

	if(obj_1.Divisible())
		cout << "The number is divisible (10, 2).\n";
	if(obj_2.Divisible())
		cout << "The number is divisible (10, 3).\n";

	getch();
	return 0;
}
