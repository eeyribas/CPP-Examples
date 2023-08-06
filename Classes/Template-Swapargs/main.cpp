#include <iostream>
#include <conio.h>

using namespace std;

template <class X>  void Swapargs(X &a, X &b){
	X temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int i = 10, j = 20;
	float x = 10.1, y = 20.3;
	cout << "Original i, j = " << i << " " << j << "\n";
	cout << "Original x, y = " << x << " " << y << "\n";

	Swapargs(i, j);
	Swapargs(x, y);
	cout << "Swapargs i, j = " << i << " " << j << "\n";
	cout << "Swapargs x, y = " << x << " " << y << "\n";

	getch();
	return 0;
}
