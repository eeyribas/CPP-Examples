#include <iostream>
#include <conio.h>

using namespace std;

class MyClass
{
	int a;

public:
	MyClass();
	~MyClass();
	void Show();
};

MyClass::MyClass()
{
	cout << "Constructor\n";
	a = 12;
}

MyClass::~MyClass()
{
	cout << "\nDeconstructor";
}

void MyClass::Show()
{
	cout << a << "\n";
}

int main()
{
	MyClass obj;
	obj.Show();

	getch();
	return 0;
}
