#include <iostream>
#include <conio.h>

using namespace std;

class Base
{
public:
	Base(int x)
	{
		i = x;
	}

	virtual void Func()
	{
		cout << "Base - Func().\n";
		cout << i << "\n";
	}

	int i;
};

class Derived1 : public Base
{
public:
	Derived1(int x) : Base(x){}

    void Func()
    {
        cout << "Derived-1 - Func().\n";
		cout << i * i << "\n";
	}
};

class Derived2 : public Base
{
public:
	Derived2(int x) : Base(x){}

    void Func()
    {
		cout << "Derived-2 - Func().\n";
		cout << i * i << "\n";
	}
};

int main()
{
	Base *p;
	Base obj(10);
	Derived1 d_obj_1(10);
	Derived2 d_obj_2(10);

	p = &obj;
	p->Func();

	p = &d_obj_1;
	p->Func();

	p = &d_obj_2;
	p->Func();

	getch();
	return 0;
}
