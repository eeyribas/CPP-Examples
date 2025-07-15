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
	Base *base;
	Derived1 derived_1(10);
	Derived2 derived_2(10);
	int j;

	for (int i = 0; i < 10; i++) {
		j = rand();
		if ((j %2))
			base = &derived_1;
		else
			base = &derived_2;
		base->Func();
	}

	getch();
	return 0;
}
