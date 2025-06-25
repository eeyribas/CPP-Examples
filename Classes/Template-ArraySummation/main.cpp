#include <iostream>
#include <conio.h>

using namespace std;

template<class X> X Sum(X *data, int sze)
{
	X result = 0;
	for (int i = 0; i < sze; i++)
		result += data[i];

	return result;
}

int main()
{
	int i[] = {1, 2, 3, 4};
	double d[] = {1.1, 2.2, 3.3, 4.4};
	cout << Sum(i, 4) << endl;
	cout << Sum(d, 4) << endl;

	getch();
	return 0;
}
