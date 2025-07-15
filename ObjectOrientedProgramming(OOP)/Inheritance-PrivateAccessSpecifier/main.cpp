#include <iostream>
#include <conio.h>

using namespace std;

class Base
{
public:
	void SetX(int n)
	{
		x = n;
	}

	void ShowX()
	{
        cout << x << "\n";
	}

private:
    int x;
};

class Derived : private Base
{
public:
	void SetXY(int n, int m)
	{
		SetX(n);
		y = m;
	}

	void ShowY()
	{
		ShowX();
		cout << y << "\n";
	}

private:
    int y;
};

int main()
{
	Derived derived;
	derived.SetXY(10, 20);
	derived.ShowY();

	getch();
	return 0;
}
