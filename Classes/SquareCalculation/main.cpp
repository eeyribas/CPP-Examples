#include <iostream>
#include <conio.h>
#include <square.h>
#include <cmath>

using namespace std;

int SqrtI(SquareClass o)
{
	return sqrt(o.GetI());
}

int main()
{
    SquareClass a(10), b(2);
	cout << SqrtI(a) << "\n";
	cout << SqrtI(b) << "\n";

	getch();
    return 0;
}
