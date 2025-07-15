#include <iostream>
#include <conio.h>

using namespace std;

class Base
{
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

private:
    int i;
};

class Derived : public Base
{
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

private:
    int j;
};

int main()
{
	Derived obj(10);
	obj.ShowI();
	obj.ShowJ();

	getch();
	return 0;
}
