#include <iostream>
#include <conio.h>
#include <typeinfo>

using namespace std;

class Base
{
	virtual void F(){};
};

class Derived1 : public Base{};
class Derived2 : public Base{};

void WhatType(Base &obj)
{
	cout << "Base obj" << typeid(obj).name() << endl;
}

int main()
{
	int i;
	Base base_obj;
	Derived1 obj_1;
	Derived2 obj_2;

	WhatType(base_obj);
	WhatType(obj_1);
	WhatType(obj_2);

	getch();
	return 0;
}
