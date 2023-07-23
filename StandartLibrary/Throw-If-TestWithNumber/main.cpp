#include <iostream>
#include <conio.h>

using namespace std;

void XTest(int test)
{
	cout << "Inside XTest, test is = " << test << "\n";
	if(test)
		throw test;
}

int main()
{
	cout << "Start\n";
	try
	{
		cout << "Inside try block\n";
		XTest(0);
		XTest(1);
		XTest(2);
	}
	catch(int i)
	{
		cout << "Caght one!Number is = ";
		cout << i << "\n";
	}
	cout << "End";

	getch();
	return 0;
}
