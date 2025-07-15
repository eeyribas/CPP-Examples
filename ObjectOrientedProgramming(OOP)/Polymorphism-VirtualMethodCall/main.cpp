#include <iostream>
#include <conio.h>

using namespace std;

class Base
{
public:
	virtual void Func()
	{
		cout << "Base() function.\n";
	}
};

class Derived1 : public Base
{
public:
	void Func()
	{
		cout << "Derived-1() function.\n";
	}
};

class Derived2 : public Base
{
public:
	void Func()
	{
		cout << "Derived-2() function.\n";
	}
};

int main()
{
    Base *base_1;
	Base base_2;
	Derived1 derived_1;
	Derived2 derived_2;

	base_1 = &base_2;
	base_1->Func();

	base_1 = &derived_1;
	base_1->Func();

	base_1 = &derived_2;
	base_1->Func();

	getch();
	return 0;
}
