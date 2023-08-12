#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

class MyClass
{
	int a;

public:
	MyClass(int n)
	{
		a = n;
	}

	MyClass(char *str)
	{
		a = atoi(str);
	}

	int Get()
	{
		return a;
	}
};

int main()
{
	MyClass obj_1 = 4;
	MyClass obj_2 = "123";
	cout << "obj_1 = " << obj_1.Get() << "\n";
	cout << "obj_2 = " << obj_2.Get() << "\n";

	getch();
	return 0;
}
