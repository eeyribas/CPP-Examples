#include <iostream>
#include <conio.h>

using namespace std;

class MyClass
{
public:
    static int i;

	void SetI(int n)
	{
		i = n;
	}

	int GetI()
	{
		return i;
	}
};

int MyClass::i;

int main()
{
	MyClass obj_1, obj_2;
	MyClass::i = 11;

	cout << "obj_1 = " << obj_1.GetI() << "\n";
	cout << "obj_2 = " << obj_2.GetI() << "\n";

	getch();
	return 0;
}
