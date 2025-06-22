#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));

	int arr[10];
	for (int i = 0; i < 10; i++)
		arr[i] = rand() % 11 - 5;
	cout << "A array = { ";

	for (int i = 0; i < 10; i++) {
		if (i == 0)
            cout << arr[i];
		else
            cout << " , " << arr[i];
	}
	cout << " }" << endl;

	getch();
	return 0;
}
