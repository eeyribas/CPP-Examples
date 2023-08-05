#include <iostream>
#include <conio.h>

using namespace std;

class MyClass
{
	int a;

public:
	MyClass(int x);
	void Show();
};

MyClass::MyClass(int x)
{
	cout << "Constructor.\n";
	a = x;
}

void MyClass::Show()
{
	cout << "Value = " << a << "\n";
}

int main()
{
	MyClass obj(4);
	obj.Show();

	getch();
	return 0;
}
