#include <iostream>
#include <conio.h>

using namespace std;

class Base
{
public:
	void SetX(int n)
	{
		x = n;
	}

	int GetX()
	{
		return x;
	}

private:
    int x;
};

class Derived : public Base
{
public:
	void SetY(int n)
	{
		y = n;
	}

	int GetY()
	{
		return y;
	}

private:
    int y;
};

int main()
{
	Base *p;
	Base b_obj;
	Derived d_obj;

	p = &b_obj;
	p->SetX(10);
	cout << "Base object = " << p->GetX() << "\n";

	p = &d_obj;
	p->SetX(99);
	d_obj.SetY(88);
	cout << "Derived object x = " << p->GetX() << "\n";
	cout << "Derived object y = " << d_obj.GetY() << "\n";

	getch();
	return 0;
}
