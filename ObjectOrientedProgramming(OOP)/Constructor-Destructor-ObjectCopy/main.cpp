#include <iostream>
#include <conio.h>

using namespace std;

class MyClass
{
public:
	MyClass(int n)
	{
		d = n;
		cout << "Constructor." << d << "\n";
	}

	~MyClass()
	{
		cout << "~Destructor." << d << "\n";
	}

	int id()
	{
		return d;
	}

private:
    int d;
};

void Function(MyClass obj)
{
	cout << obj.id() << "\n";
}

int main()
{
	MyClass x(1);
	Function(x);

	getch();
	return 0;
}
