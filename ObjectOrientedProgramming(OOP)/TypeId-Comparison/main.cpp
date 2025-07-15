#include <iostream>
#include <typeinfo>
#include <conio.h>

using namespace std;

class X
{
	virtual void Function(){}
};

class Y
{
	virtual void Function(){}
};

int main()
{
	X x_1, x_2;
	Y y_1;

	if (typeid(x_1) == typeid(x_2))
		cout << "Same.\n";
	else
		cout << "Different.\n";

	if (typeid(x_1) != typeid(x_2))
		cout << "Different.\n";
	else
		cout << "Same.\n";

	getch();
	return 0;
}
