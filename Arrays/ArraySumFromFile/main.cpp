#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main()
{
	int arr[10];

    ifstream f_in;
	f_in.open("data.txt");
	for (int i = 0; i < 10; i++)
		f_in >> arr[i];
	f_in.close();

	cout << "A array = [ ";
	for (int i = 0; i < 10; i++) {
        if (i == 0)
            cout << arr[i];
        else
            cout << " , " << arr[i];
	}
	cout << " ]" << endl;

	int sum = 0;
	for (int i = 0; i < 10; i++)
		sum = sum + arr[i];
	cout << "Sum = " << sum << endl;

	getch();
	return 0;
}
