#include <iostream>
#include <conio.h>

using namespace std;

inline double Square(const double s)
{
	return s * s * s;
}

int main()
{
	double edge;
	cout << "Enter edge = ";
	cin >> edge;
	cout << "Volume = " << Square(edge) << endl;

	getch();
	return 0;
}
