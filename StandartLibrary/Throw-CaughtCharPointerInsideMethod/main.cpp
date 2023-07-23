#include <iostream>
#include <conio.h>

using namespace std;

void XHandler()
{
	try
	{
		throw "Hello";
	}
	catch(char *)
	{
		cout << "Caught char * inside XHandler.\n";
		throw;
	}
}

int main()
{
	cout << "Start\n";
	try
	{
		XHandler();
	}
	catch(char *)
	{
		cout << "Caught char * inside main.\n";
	}
	cout << "End";

	getch();
	return 0;
}
