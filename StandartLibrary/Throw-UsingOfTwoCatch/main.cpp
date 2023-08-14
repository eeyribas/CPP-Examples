#include <iostream>
#include <conio.h>

using namespace std;

void XHandler(int test)
{
	try{
		if(test)
			throw test;
		else
			throw "Value = 0";
	} catch(int i){
		cout << "Caught One! Ex = " << i << "\n";
	} catch(char *str){
		cout << "Caught string = ";
		cout << str << "\n";
	}
}

int main()
{
	cout << "Start\n";

	XHandler(1);
	XHandler(2);
	XHandler(0);
	XHandler(3);

	cout << "End";

	getch();
	return 0;
}
