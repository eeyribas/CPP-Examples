#include <iostream>
#include <conio.h>

using namespace std;

template<class Type1, class Type2> void MyFunction(Type1 x, Type2 y)
{
	cout << x << "   " << y << endl;
}

int main()
{
	MyFunction(10, "hi");
	MyFunction(0.23, 10L);

	getch();
	return 0;
}
