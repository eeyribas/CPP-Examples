#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a, b;

	cout << "Enter the edge value = ";
	cin >> a;
	cout << "Enter the other edge value = ";
	cin >> b;

	int area = a * b;
	int env = 2 * (a + b);

	cout << "\nArea = " << area << endl;
	cout << "\nEnv = " << env << endl;

	getch();
	return 0;
}
