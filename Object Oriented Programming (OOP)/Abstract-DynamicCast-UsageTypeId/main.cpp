#include <iostream>
#include <conio.h>
#include <typeinfo>

using namespace std;

class Base
{
public:
	virtual void f(){}
};

class Derived : public Base
{
public:
	void DerivedOnly()
	{
		cout << "Is a derived object\n";
	}
};

int main()
{
	Base *bp, b_ob;
	Derived *dp, d_ob;

	bp = &b_ob;
	if(typeid(*bp) == typeid(Derived)){
		dp = (Derived *)bp;
		dp->DerivedOnly();
	}
	else {
		cout<<"Cast from base";
	}

	bp = &d_ob;
	if(typeid(*bp) == typeid(Derived)){
		dp = (Derived *)bp;
		dp->DerivedOnly();
	}
	else {
		cout<<"error\n";
	}

	bp = &b_ob;
	dp = dynamic_cast<Derived *>(bp);
	if(dp)
		dp->DerivedOnly();
	else
		cout << "Cast from base\n";

	bp = &d_ob;
	dp = dynamic_cast<Derived *>(bp);
	if(dp)
		dp->DerivedOnly();
	else
		cout << "error\n";

	getch();
	return 0;
}
