#include <iostream>
#include <conio.h>

using namespace std;

class MyClass
{
public:
	MyClass(int x, int y);

	void Show();

private:
    int a, b;
};

MyClass::MyClass(int x, int y)
{
	cout << "Constructor.\n";
	a = x;
	b = y;
}

void MyClass::Show()
{
	cout << a << ' ' << b << "\n";
}

int main()
{
	MyClass obj(4, 7);
	obj.Show();

	getch();
	return 0;
}
