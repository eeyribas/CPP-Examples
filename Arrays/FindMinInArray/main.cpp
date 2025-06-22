#include <iostream>
#include <conio.h>
#include <time.h>

#define SIZE 10

using namespace std;

void Init(int arr[]);
int FindMin(int arr[]);
void Print(int arr[], int minim);

int main()
{
	int arr[SIZE];
	Init(arr);
	int number = FindMin(arr);
	Print(arr, number);

	getch();
	return 0;
}

void Init(int arr[])
{
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
		arr[i] = rand() % 10;
}

int FindMin(int arr[])
{
	int m = arr[0];
	for (int i = 1; i < SIZE; i++) {
		if (arr[i] < m)
			m = arr[i];
	}

	return m;
}

void Print(int arr[], int minim)
{
	cout << "A array = { ";
	for (int i = 0; i < SIZE; i++) {
        if (i == 0)
            cout << arr[i];
		else
			cout << " , " << arr[i];
	}
	cout << " }" << endl;
	cout << "\nMinumum = " << minim << endl;
}
