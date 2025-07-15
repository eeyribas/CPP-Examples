#include <iostream>
#include <conio.h>

using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base.\n";
	}

	~Base()
	{
		cout << "~Base.\n";
	}
};

class Derived : public Base
{
public:
	Derived(int n)
	{
		cout << "Derived.\n";
		j = n;
	}

	~Derived()
	{
		cout << "~Derived.\n";
	}

	void Show()
	{
		cout << j << " value" << "\n";
	}

private:
    int j;
};

int main()
{
	Derived obj(10);
	obj.Show();

	getch();
	return 0;
}
