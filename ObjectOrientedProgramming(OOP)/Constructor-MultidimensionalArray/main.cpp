#include <iostream>
#include <conio.h>

using namespace std;

class Sample
{
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

private:
    int a, b;
};

int main()
{
	Sample sample[4][2] = {Sample(1, 2), Sample(3, 4), Sample(5, 6), Sample(7, 8),
                           Sample(9, 10), Sample(11, 12), Sample(13, 14), Sample(15, 16)};
	for (int i = 0; i < 4; i++) {
		cout << sample[i][0].GetA() << ' ';
		cout << sample[i][0].GetB() << "\n";
		cout << sample[i][1].GetA() << ' ';
		cout << sample[i][1].GetB() << "\n";
	}
	cout << "\n";

	getch();
	return 0;
}
