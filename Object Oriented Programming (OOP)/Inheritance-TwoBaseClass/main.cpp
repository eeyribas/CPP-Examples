#include <iostream>
#include <conio.h>

using namespace std;

class B1
{
	int a;
public:
	B1(int n)
	{
		a = n;
	}

	int GetA()
	{
		return a;
	}
};

class B2
{
	int b;
public:
	B2(int x)
	{
		b = x;
	}

	int GetB()
	{
		return b;
	}
};

class D : public B1, public B2
{
	int c;
public:
	D(int x, int y, int z) : B1(z), B2(y)
	{
		c = x;
	}

	void Show()
	{
		cout << GetA() << "  " << GetB() << "  " << c << "\n";
	}
};

int main()
{
	D obj(4, 78, 11);
	obj.Show();

	getch();
	return 0;
}
