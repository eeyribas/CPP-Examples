#include <iostream>
#include "sample.h"

using namespace std;

Sample Input()
{
	char s[80];
	Sample str;
	cout << "Enter a characters = ";
	cin >> s;
	str.Set(s);

	return str;
}

int main()
{
    Sample obj;

	obj = Input();
	obj.Show();

	getch();
    return 0;
}
