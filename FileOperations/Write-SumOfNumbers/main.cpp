#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main()
{
	double sum = 0;
	int temp;

	ifstream fin;
	fin.open("data.txt");

	for(int i = 0; i < 10; i++){
		fin >> temp;
		cout << temp << ' \t ';
		sum = sum + temp;
	}
	fin.close();
	cout << endl;

	cout << "Sum = " << sum << endl;

	getch();
	return 0;
}
