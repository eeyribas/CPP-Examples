#include <iostream>
#include <conio.h>

using namespace std;

class Base
{
    int i;

public:
	Base(int n)
	{
		cout << "Base.\n";
		i = n;
	}

	~Base()
	{
		cout << "~Base.\n";
	}

	void ShowI()
	{
		cout << i << " value\n";
	}
};

class Derived : public Base
{
    int j;

public:
	Derived(int n) : Base(n)
	{
		cout << "Derived.\n";
		j = n;
	}

	~Derived()
	{
		cout << "~Derived.\n";
	}

	void ShowJ()
	{
		cout << j << " value" << "\n";
	}
};

int main()
{
	Derived obj(10);
	obj.ShowI();
	obj.ShowJ();

	getch();
	return 0;
}
