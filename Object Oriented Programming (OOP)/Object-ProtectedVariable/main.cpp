#include <iostream>
#include <conio.h>

using namespace std;

class Sample
{
	int a;

protected:
	int b;

public:
	int c;

	Sample(int n, int m)
	{
		a = n;
		b = m;
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
	Sample obj(10, 20);
	obj.c=30;
	cout << obj.GetA() << "  " << obj.GetB() << "  " << obj.c << "\n";

	getch();
	return 0;
}
