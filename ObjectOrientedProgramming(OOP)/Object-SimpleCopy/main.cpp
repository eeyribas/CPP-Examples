#include <iostream>
#include <conio.h>

using namespace std;

class MyClass
{
public:
	void Set(int i, int j)
	{
		a = i;
		b = j;
	}

	void Show()
	{
		cout << a << ' ' << b << "\n";
	}

private:
    int a, b;
};

int main()
{
	MyClass obj_1, obj_2;
	obj_1.Set(10, 8);
	obj_2 = obj_1;
	obj_1.Show();
	obj_2.Show();

	getch();
	return 0;
}
