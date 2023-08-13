#include <iostream>
#include <conio.h>

using namespace std;

template<class Type1, class Type2>class MyClass
{
	Type1 i;
	Type2 j;

public:
	MyClass(Type1 a, Type2 b){
		i = a;
		j = b;
	}

	void Show(){
		cout << i << ' ' << j << "\n";
	}
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
