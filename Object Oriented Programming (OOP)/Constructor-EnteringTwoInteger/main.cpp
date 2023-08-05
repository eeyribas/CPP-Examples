#include <iostream>
#include <conio.h>

using namespace std;

class MyClass
{
	int i, j;

public:
	MyClass(int a, int b);
	void Show();
};

MyClass::MyClass(int a, int b)
{
	i = a;
	j = b;
}

void MyClass::Show()
{
	cout << i << ' ' << j << "\n";
}

int main()
{
	int x, y;
	cout << "Enter two integers = ";
	cin >> x >> y;

	MyClass obj(x, y);
	obj.Show();

	getch();
	return 0;
}
