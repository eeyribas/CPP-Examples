#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main()
{
	int arr[10];
	fstream fin;
	fin.open("data.txt");

	for(int i = 0; i < 10; i++)
		fin >> arr[i];
	fin.close();

	cout << "A array = [";
	for(int j = 0; j < 10; j++){
		if(j == 0)
			cout << arr[j];
		else
			cout << " , " << arr[j];
	}
	cout << "]" << endl;

	getch();
	return 0;
}
