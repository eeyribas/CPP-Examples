#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

int main()
{
	int arr[10];
	srand(time(NULL));

	for(int i = 0; i < 10; i++)
		arr[i] = rand() % 11 -5;
	cout << "A array = {";

	for(int j = 0; j < 10; j++){
		if(j == 0)
            cout << arr[j];
		else
            cout << " , " << arr[j];
	}
	cout << "}" << endl;

	getch();
	return 0;
}
