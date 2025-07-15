#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

class MyClass
{
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

private:
    int a;
};

int main()
{
	MyClass obj_1 = 4;
	cout << "obj-1 = " << obj_1.Get() << "\n";
	MyClass obj_2 = "123";
	cout << "obj-2 = " << obj_2.Get() << "\n";

	getch();
	return 0;
}
