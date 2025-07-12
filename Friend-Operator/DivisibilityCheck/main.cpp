#include <iostream>
#include <conio.h>

using namespace std;

class MyClass
{
public:
	MyClass(int i, int j)
	{
		n = i;
		d = j;
	}

	friend int IsControl(MyClass obj);

private:
    int n, d;
};

int IsControl(MyClass obj)
{
	if (!(obj.n % obj.d))
		return 1;
	else
		return 0;
}

int main()
{
    MyClass obj_1(10, 2), obj_2(13, 3);

	if (IsControl(obj_1))
		cout << "10 is a multiple of 2.\n";
	else
		cout << "10 isn't a multiple of 2.\n";

	if (IsControl(obj_2))
		cout << "13 is a multiple of 3.\n";
	else
		cout << "13 isn't a multiple of 3.\n";

	getch();
	return 0;
}
