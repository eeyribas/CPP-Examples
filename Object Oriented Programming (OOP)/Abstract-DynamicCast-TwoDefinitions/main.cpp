#include <iostream>
#include <conio.h>
#include <typeinfo>

using namespace std;

class B
{
	virtual void f(){}
};

class D1 : public B
{
	void f(){}
};

class D2 : public B
{
	void f(){}
};

int main()
{
	B *p;
	D2 ob;

	p = dynamic_cast<D2 *>(&ob);
	if(p)
		cout << "Cast OK\n";
	else
		cout << "Cast false\n";

	getch();
	return 0;
}
