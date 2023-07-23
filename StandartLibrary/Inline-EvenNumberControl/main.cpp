#include <iostream>
#include <conio.h>

using namespace std;

inline int Even(int x)
{
	return !(x % 2);
}

int main()
{
	if(Even(10))
		cout << "The number is even (10).\n";
	if(Even(11))
		cout << "The number is even (11).\n";

	getch();
	return 0;
}
