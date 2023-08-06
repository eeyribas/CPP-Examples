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
		cout << "Derived1() function.\n";
	}
};

class Derived2 : public Base
{
public:
	void Func()
	{
		cout << "Derived2() function.\n";
	}
};

int main()
{
    Base *p;
	Base ob;
	Derived1 d_obj_1;
	Derived2 d_obj_2;

	p = &ob;
	p->Func();

	p = &d_obj_1;
	p->Func();

	p = &d_obj_2;
	p->Func();

	getch();
	return 0;
}
