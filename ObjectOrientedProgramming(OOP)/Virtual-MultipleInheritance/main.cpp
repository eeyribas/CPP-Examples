#include <iostream>
#include <conio.h>

using namespace std;

class Base
{
public:
	int i;
};

class Derived1 : virtual public Base
{
public:
	int j;
};

class Derived2 : virtual public Base
{
public:
	int k;
};

class Derived3 : public Derived1, public Derived2
{
public:
	int Product()
	{
		return i * j * k;
	}
};

int main()
{
	Derived3 d;
	d.i = 4;
	d.j = 5;
	d.k = 2;
	cout << "Result = " << d.Product() << "\n";

	getch();
	return 0;
}
