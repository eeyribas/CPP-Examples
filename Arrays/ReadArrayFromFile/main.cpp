#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main()
{
	int arr[10];

	fstream f_in;
	f_in.open("data.txt");
	for (int i = 0; i < 10; i++)
		f_in >> arr[i];
	f_in.close();

	cout << "Array = [ ";
	for (int i = 0; i < 10; i++) {
		if (i == 0)
			cout << arr[i];
		else
			cout << " , " << arr[i];
	}
	cout << " ]" << endl;

	getch();
	return 0;
}
