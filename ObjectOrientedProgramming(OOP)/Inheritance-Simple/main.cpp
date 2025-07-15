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

class Derived : public Base
{
public:
	void SetY(int n)
	{
		y = n;
	}

	void ShowY()
	{
		cout << y << "\n";
	}

private:
    int y;
};

int main()
{
	Derived derived;
	derived.SetX(10);
	derived.SetY(20);
	derived.ShowX();
	derived.ShowY();

	getch();
	return 0;
}
