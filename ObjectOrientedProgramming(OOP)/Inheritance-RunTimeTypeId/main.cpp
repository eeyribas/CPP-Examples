#include <iostream>
#include <typeinfo>
#include <conio.h>

using namespace std;

class Base
{
	virtual void Function(){};
};

class Derived1 : public Base
{
};

class Derived2 : public Base
{
};

int main()
{
	Base *p, base_obj;
	Derived1 obj_1;
	Derived2 obj_2;
	int i;

	cout << "Typed of is = " << typeid(i).name() << endl;
	p = &obj_1;
	cout << "Object obj_1 = " << typeid(*p).name() << endl;
	p = &obj_2;
	cout << "Object obj_2 = " << typeid(*p).name() << endl;
	p = &base_obj;
	cout << "Object base_obj = " << typeid(*p).name() << endl;

	getch();
	return 0;
}
