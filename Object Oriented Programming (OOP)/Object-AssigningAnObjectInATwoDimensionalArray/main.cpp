#include <iostream>
#include <conio.h>

using namespace std;

class Sample
{
	int a, b;

public:
	Sample(int i, int j)
	{
		a = i;
		b = j;
	}

	int GetA()
	{
		return a;
	}

	int GetB()
	{
		return b;
	}
};

int main()
{
	Sample obj[4][2] = {Sample(1, 2), Sample(3, 4), Sample(5, 6), Sample(7, 8),
                        Sample(9, 10), Sample(11, 12), Sample(13, 14), Sample(15, 16)};

	for(int i = 0; i < 4; i++)
    {
		cout << obj[i][0].GetA() << ' ';
		cout << obj[i][0].GetB() << "\n";
		cout << obj[i][1].GetA() << ' ';
		cout << obj[i][1].GetB() << "\n";
	}
	cout << "\n";

	getch();
	return 0;
}
