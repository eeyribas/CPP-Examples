#include <iostream>
#include <conio.h>

using namespace std;

class Sample
{
public:
	void SetAB(int n, int m)
	{
		a = n;
		b = m;
	}

protected:
    int a, b;
};

class Derived : public Sample
{
public:
	void SetC(int m)
	{
		c = m;
	}

	void ShowABC()
	{
		cout << a << "  " << b << "  " << c << "\n";
	}

private:
    int c;
};

int main()
{
	Derived derived;
	derived.SetAB(5, 7);
	derived.SetC(3);
	derived.ShowABC();

	getch();
	return 0;
}
