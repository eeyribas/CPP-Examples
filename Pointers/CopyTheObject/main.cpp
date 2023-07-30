#include <iostream>
#include <conio.h>

using namespace std;

class MyClass
{
	int a;

public:
	MyClass(int x);
	int Get();
};

MyClass::MyClass(int x)
{
	a = x;
}

int MyClass::Get()
{
    return a;
}

int main()
{
	MyClass obj(120);
	MyClass *p;
	p = &obj;

	cout << "Object value = " << obj.Get();
	cout << "\n";
	cout << "Pointer object value = " << p->Get();

	getch();
	return 0;
}
