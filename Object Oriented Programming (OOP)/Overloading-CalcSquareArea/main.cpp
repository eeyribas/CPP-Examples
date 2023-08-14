#include <iostream>
#include <conio.h>

using namespace std;

int Square(int x)
{
	return x * x;
}

double Square(double y)
{
	return y * y;
}

int main()
{
	cout << "7 square = " << Square(7) << "\n"
         << "7.5 square = " << Square(7.5) << endl;

	getch();
	return 0;
}
