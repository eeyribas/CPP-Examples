#include <iostream>
#include <conio.h>

using namespace std;

template <class X> X Min(X a, X b)
{
	if (a <= b)
		return a;
	else
		return b;
}

int main()
{
	cout << Min(12.2, 2.0) << endl;
	cout << Min(3, 4) << endl;
	cout << Min('c', 'a') << endl;

	getch();
	return 0;
}
