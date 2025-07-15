#include <iostream>
#include <conio.h>

using namespace std;

class B1
{
public:
	B1(int n)
	{
		a = n;
	}

	int GetA()
	{
		return a;
	}

private:
    int a;
};

class B2
{
public:
	B2(int x)
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

class D : public B1, public B2
{
public:
	D(int x, int y, int z) : B1(z), B2(y)
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
	D d(4, 78, 11);
	d.Show();

	getch();
	return 0;
}
