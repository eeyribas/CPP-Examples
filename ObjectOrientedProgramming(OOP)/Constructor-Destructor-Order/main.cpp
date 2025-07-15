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
	Derived()
	{
        cout << "Derived.\n";
	}

	~Derived()
	{
		cout << "~Derived.\n";
	}
};

int main()
{
	Derived obj;

	getch();
	return 0;
}
