#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	char ch;
	cout << "Press keys, press x to exit.\n";

	do{
		cout << " ; ";
		cin >> ch;
	}while(ch != 'x');

	cout<<"You find that you have exited the program."<<endl;

	getch();
	return 0;
}
