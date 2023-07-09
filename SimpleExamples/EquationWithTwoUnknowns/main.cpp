#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

void Data(double &a, double &b, double &c);
void Calculation(double a, double b, double c, double &x1, double &x2);
void Print(double x1, double x2);

void Data(double &a, double &b, double &c)
{
	cout << "enter a value = ";
	cin >> a;
	cout << "enter b value = ";
	cin >> b;
	cout << "enter c value = ";
	cin >> c;
}

void Calculation(double a, double b, double c, double &x1, double &x2)
{
	double delta = (b * b) - (4 * a * c);
	if(delta < 0){
		cout << "Virtual axis.";
		exit(-1);
	}

	double sdelta = sqrt(delta);
	x1 = (-b - sdelta) / 2 * a;
	x2 = (-b + sdelta) / 2 * a;
}

void Print(double x1, double x2)
{
	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;
}

int main()
{
	double a, b, c, x1, x2;
	Data(a, b, c);
	Calculation(a, b, c, x1, x2);
	Print(x1, x2);

	getch();
	return 0;
}
