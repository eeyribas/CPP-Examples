#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main()
{
	int arr[10];
    ifstream fin;
	int sum = 0;
	fin.open("data.txt");

	for(int i = 0; i < 10; i++)
		fin >> arr[i];
	fin.close();

	cout << "A array = [";
	for(int i = 0; i < 10; i++){
        if(i == 0)
            cout << arr[i];
        else
            cout << " , " << arr[i];
	}
	cout << "]" << endl;

	for(int i = 0; i < 10; i++)
		sum = sum + arr[i];
	cout << "Sum = " << sum << endl;

	getch();
	return 0;

}
