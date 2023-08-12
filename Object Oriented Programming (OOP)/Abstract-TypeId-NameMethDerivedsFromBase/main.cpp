#include <iostream>
#include <conio.h>
#include <typeinfo>

using namespace std;

class Base
{
	virtual void f(){};
};

class Derived1 : public Base{};
class Derived2 : public Base{};

int main()
{
	Base *p, base_obj;
	Derived1 obj_1;
	Derived2 obj_2;
	int i;

	cout << "Typed of is = " << typeid(i).name() << endl;
	p = &obj_1;
	cout << "Object p1 = " << typeid(*p).name() << endl;
	p = &obj_2;
	cout << "Object p2 = " << typeid(*p).name() << endl;
	p = &base_obj;
	cout << "Object base_obj = " << typeid(*p).name() << endl;

	getch();
	return 0;
}
