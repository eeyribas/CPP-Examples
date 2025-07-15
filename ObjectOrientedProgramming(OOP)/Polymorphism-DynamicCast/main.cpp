#include <iostream>
#include <typeinfo>
#include <conio.h>

using namespace std;

class B
{
	virtual void Function(){}
};

class D1 : public B
{
	void Function(){}
};

class D2 : public B
{
	void Function(){}
};

int main()
{
	B *b;
	D2 d_2;

	b = dynamic_cast<D2*>(&d_2);
	if (b)
		cout << "Cast OK\n";
	else
		cout << "Cast false\n";

	getch();
	return 0;
}
