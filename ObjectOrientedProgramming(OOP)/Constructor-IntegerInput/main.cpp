#include <iostream>
#include <conio.h>

using namespace std;

class MyClass
{
public:
	MyClass(int x);

	void Show();

private:
    int a;
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
