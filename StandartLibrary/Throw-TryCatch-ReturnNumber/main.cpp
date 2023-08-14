#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    cout << "Start\n";
	try{
		cout << "Insert try block\n";
		throw 10;
		cout << "This will not execute";
	} catch(int i){
		cout << "Caught one! Number is = ";
		cout << i << "\n";
	}
	cout << "End";

	getch();
	return 0;
}
