#include <iostream>
#include <conio.h>

#define SIZE 30

using namespace std;

int main()
{
	int fib[SIZE];
	int upper_value;

	cout << "Enter Upper Value = ";
	cin >> upper_value;

	if(upper_value > SIZE){
		cout << "Error!!";
		exit(-1);
	}

	fib[0] = 0;
	fib[1] = 1;

	for(int i = 2; i < upper_value; i++)
		fib[i] = fib[i - 1] + fib[i - 2];

	for(int j = 0; j < upper_value; j++)
        cout << "fib(" << j + 1 << ")=" << " " << fib[j] << endl;

	getch();
	return 0;
}
