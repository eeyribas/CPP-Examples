#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
	int arr[10];

	ifstream f_in;
	f_in.open("data.txt");
	for (int i = 0; i < 10; i++)
		f_in >> arr[i];
	f_in.close();

	cout << "A = [ ";
	for (int i = 0; i < 10; i++) {
		if (i == 0)
			cout << arr[i];
		else
			cout << " , " << arr[i];
	}
	cout << " ]" << endl;

	int minim = arr[0];
	for (int i = 1; i < 10; i++) {
		if (minim > arr[i])
			minim = arr[i];
	}
    cout << "Min = " << minim << endl;

    getch();
    return 0;
}
