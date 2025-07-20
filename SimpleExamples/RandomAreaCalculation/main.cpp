#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));

	int a = rand() % 20;
	int b = rand() % 14;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	int area = a * b;
	cout << "\nArea = " << area << endl;

	getch();
	return 0;
}
