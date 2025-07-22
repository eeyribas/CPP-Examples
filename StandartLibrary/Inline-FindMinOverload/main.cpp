#include <iostream>
#include <conio.h>

using namespace std;

inline int Min(int a, int b)
{
	return a < b ? a : b;
}

inline long Min(long a, long b)
{
	return a < b ? a : b;
}

inline double Min(double a, double b)
{
	return a < b ? a : b;
}

int main()
{
	cout << Min(-10, 10) << "\n";
	cout << Min(-10.01, 100.002) << "\n";
	cout << Min(-10L, 12L) << "\n";

	getch();
	return 0;
}
