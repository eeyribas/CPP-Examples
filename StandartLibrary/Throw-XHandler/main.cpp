#include <iostream>
#include <conio.h>

using namespace std;

void XHandler(int test)
{
	try
	{
		if(test)
			throw test;
	}
	catch(int i)
	{
		cout << "Caught one! Ex = " << i << "\n";
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
