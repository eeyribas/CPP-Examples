#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

#define SIZE 10

void Init(int arr[]);
void Arrangement(int arr[]);
void Print(int arr[]);

int main()
{
	int arr[SIZE];
	Init(arr);
	Arrangement(arr);
	Print(arr);

	getch();
	return 0;
}

void Init(int arr[])
{
	srand(time(NULL));
	for(int i = 0; i < SIZE; i++)
		arr[i] = rand() % 10;
}

void Arrangement(int arr[])
{
    int temp;
	for(int i = 0; i < SIZE-1; i++) {
        for(int j = i + 1; j < SIZE; j++) {
            if(arr[i] > arr[j]){
                temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
            }
        }
	}
}

void Print(int arr[]){
	cout << "A array = {";
	for(int i = 0; i < SIZE; i++){
		if(i == 0)
			cout << arr[i];
		else
			cout << " , " << arr[i];
	}
	cout << "}" << endl;
}
