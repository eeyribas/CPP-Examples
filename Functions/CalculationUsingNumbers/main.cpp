#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

const int c_0 = 13;
const int c_f = 12;

double Init()
{
	double number;
	cout << "Enter number = ";
	cin >> number;

	return number;
}

double Calculation(int a, double dm)
{
	double f = (c_f * pow(c_0, 2) * dm) / a;
	return f;
}

void Print(double f)
{
	cout << "Frequence = " << f << endl;
}

int main()
{
	int a = 20;
	double dm = Init();
	double f = Calculation(a, dm);
	Print(f);

	getch();
	return 0;
}
