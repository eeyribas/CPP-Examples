#include <iostream>
#include <conio.h>

using namespace std;

template<class X>X GetP(X a, X b)
{
	X result = 1;
	for (int i = 0; i < b; i++)
		result *= a;

	return result;
}

int main()
{
	cout << GetP(2, 3) << endl;
	cout << GetP(10.0, 2.0) << endl;

	getch();
	return 0;
}
