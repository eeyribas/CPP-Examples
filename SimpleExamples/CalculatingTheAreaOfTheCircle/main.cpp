#include <iostream>
#include <conio.h>

using namespace std;

void Init(int &r);
double Area(int r);
void Print(double f);

#define PI 3.14

int main()
{
	int r;
	Init(r);
	double f = Area(r);
	Print(f);

	getch();
	return 0;
}

void Init(int &r)
{
	cout << "Enter r = ";
	cin >> r;
}

double Area(int r)
{
	double c = PI * r * r;
	return c;
}

void Print(double f)
{
	cout << "Area = " << f << endl;
}
