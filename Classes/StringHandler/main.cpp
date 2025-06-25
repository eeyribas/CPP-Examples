#include <iostream>
#include <conio.h>
#include "sample.h"

using namespace std;

Sample Input()
{
	char str[80];
	Sample sample;
	cout << "Enter a characters = ";
	cin >> str;
	sample.Set(str);

	return sample;
}

int main()
{
    Sample sample;
	sample = Input();
    sample.Show();

	getch();
    return 0;
}
