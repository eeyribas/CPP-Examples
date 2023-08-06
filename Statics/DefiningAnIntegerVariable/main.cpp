#include <iostream>
#include <conio.h>

using namespace std;

class MyClass
{
	static int i;

public:
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
	obj_1.SetI(12);

	cout << "obj_1 = " << obj_1.GetI() << "\n";
	cout << "obj_2 = " << obj_2.GetI() << "\n";

	getch();
	return 0;
}
