#include <iostream>
#include <conio.h>

using namespace std;

class Sample
{
public:
	Sample(int a, int b)
	{
	    i = a;
	    j = b;
	}

	int Divisible()
	{
		return !(i % j);
	}

private:
    int i, j;
};

int main()
{
	Sample sample_1(10, 2), sample_2(10, 3);
	if (sample_1.Divisible())
		cout << "10 is divisible by 2.\n";

	if (sample_2.Divisible())
		cout << "10 is divisible by 3.\n";

	getch();
	return 0;
}
