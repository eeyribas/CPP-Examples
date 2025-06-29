#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
    ifstream in;
	in.open("data.txt");

	double sum = 0;
	int tmp;
	for (int i = 0; i < 10; i++) {
		in >> tmp;
		cout << tmp << ' \t ';
		sum = sum + tmp;
	}
	in.close();
	cout << endl;
	cout << "Sum = " << sum << endl;

	getch();
	return 0;
}
