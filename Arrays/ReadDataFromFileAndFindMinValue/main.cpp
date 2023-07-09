#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
	ifstream fin;
	int arr[10];

	fin.open("data.txt");
	for(int i = 0; i < 10; i++)
		fin >> arr[i];
	fin.close();

	cout << "A = [ ";
	for(int i = 0; i < 10; i++){
		if(i == 0)
			cout << arr[i];
		else
			cout << " , " << arr[i];
	}
	cout << "]" << endl;

	int min = arr[0];
	for(int i = 1; i < 10; i++) {
		if(min > arr[i])
			min = arr[i];
	}
    cout << "Min = " << min << endl;

    getch();
    return 0;
}
