#include <iostream>
#include <conio.h>

using namespace std;

class MyClass
{
public:
	MyClass();
	~MyClass();

	void Show();

private:
    int a;
};

MyClass::MyClass()
{
	cout << "Constructor\n";
	a = 12;
}

MyClass::~MyClass()
{
	cout << "\nDestructor";
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
