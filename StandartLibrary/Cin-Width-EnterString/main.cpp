#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int w = 4;
	char str[10];

	cout << "Enter sentence =\n";
	cin.width(5);

	while(cin >> str){
		cout.width(w++);
		cout << str << endl;
		cin.width(5);
	}

	getch();
	return 0;
}
