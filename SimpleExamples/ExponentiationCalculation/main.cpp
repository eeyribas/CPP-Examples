#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int b, e;
	cout << "Enter base = ";
	cin >> b;
	cout << "Enter exponentiation = ";
	cin >> e;

	int r = 1;
	for (; e; e--)
        r = r * b;
	cout << "Result = " << r << endl;

	getch();
	return 0;
}
