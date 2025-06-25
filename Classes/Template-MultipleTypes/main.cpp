#include <iostream>
#include <conio.h>

using namespace std;

template<class Type1, class Type2> class MyClass
{
public:
	MyClass(Type1 a, Type2 b)
	{
		type_1 = a;
		type_2 = b;
	}

	void Show()
	{
		cout << type_1 << ' ' << type_2 << endl;
	}

private:
	Type1 type_1;
	Type2 type_2;
};

int main()
{
	MyClass<int, double> obj_1(10, 0.23);
	MyClass<char, char*> obj_2('X', "This is a test.");
	obj_1.Show();
	obj_2.Show();

	getch();
	return 0;
}
