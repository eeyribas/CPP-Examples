#include <iostream>
#include <conio.h>

using namespace std;

class B1
{
public:
	B1(int x)
	{
		a = x;
	}

	int GetA()
	{
		return a;
	}

private:
    int a;
};

class D1 : public B1
{
public:
	D1(int x, int y) : B1(y)
	{
		b = x;
	}

	int GetB()
	{
		return b;
	}

private:
    int b;
};

class D2 : public D1
{
public:
	D2(int x, int y, int z) : D1(y, z)
	{
		c = x;
	}

	void Show()
	{
		cout << GetA() << "  " << GetB() << "  " << c << "\n";
	}

private:
    int c;
};

int main()
{
	D2 d_2(5, 8, 1);
	d_2.Show();
	cout << d_2.GetA() << "  " << d_2.GetB() << "\n";

	getch();
	return 0;
}
