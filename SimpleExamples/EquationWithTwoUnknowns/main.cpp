#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

void Data(double &a, double &b, double &c);
void Calculation(double a, double b, double c, double &x_1, double &x_2);
void Print(double x_1, double x_2);

void Data(double &a, double &b, double &c)
{
	cout << "enter a value = ";
	cin >> a;
	cout << "enter b value = ";
	cin >> b;
	cout << "enter c value = ";
	cin >> c;
}

void Calculation(double a, double b, double c, double &x_1, double &x_2)
{
	double delta = (b * b) - (4 * a * c);
	if(delta < 0){
		cout << "Virtual axis.";
		exit(-1);
	}

	double sdelta = sqrt(delta);
	x_1 = (-b - sdelta) / 2 * a;
	x_2 = (-b + sdelta) / 2 * a;
}

void Print(double x_1, double x_2)
{
	cout << "x_1 = " << x_1 << endl;
	cout << "x_2 = " << x_2 << endl;
}

int main()
{
	double a, b, c, x_1, x_2;
	Data(a, b, c);
	Calculation(a, b, c, x_1, x_2);
	Print(x_1, x_2);

	getch();
	return 0;
}
