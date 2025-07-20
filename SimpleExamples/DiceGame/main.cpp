#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));

	int a = rand() % 6 + 1;
	int b = rand() % 6 + 1;
	cout << "First dice = " << a << endl;
	cout << "\nSecond dice = " << b << endl;

	if (a == b)
        cout << "\nTwin!!!" << endl;
	else
		cout << "\nYou have assigned different values!!!" << endl;

	getch();
	return 0;
}
