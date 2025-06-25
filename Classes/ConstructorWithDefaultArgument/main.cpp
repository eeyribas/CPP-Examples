#include <iostream>
#include <conio.h>

using namespace std;

class MyClass
{
public:
	MyClass(int n = 0)
	{
		x = n;
	}

	int GetX()
	{
        return x;
	}

private:
    int x;
};

int main()
{
	MyClass obj_1(10);
	MyClass obj_2;

	cout << "obj-1 == " << obj_1.GetX() << endl;
	cout << "obj-2 == " << obj_2.GetX() << endl;

	getch();
	return 0;
}
