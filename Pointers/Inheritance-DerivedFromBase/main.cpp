#include <iostream>
#include <conio.h>

using namespace std;

class Base
{
	int x;

public:
	void SetX(int n){
		x = n;
	}

	int GetX(){
		return x;
	}
};

class Derived : public Base
{
	int y;

public:
	void SetY(int n){
		y = n;
	}

	int GetY(){
		return y;
	}
};

int main()
{
	Base *p;
	Base b_ob;
	Derived d_ob;

	p = &b_ob;
	p->SetX(10);
	cout << "Base object = " << p->GetX() << "\n";

	p = &d_ob;
	p->SetX(99);
	d_ob.SetY(88);
	cout << "Derived object x = " << p->GetX() << "\n";
	cout << "Derived object y = " << d_ob.GetY() << "\n";

	getch();
	return 0;
}
