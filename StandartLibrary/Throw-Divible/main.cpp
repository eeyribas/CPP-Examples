#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

double Divible(double a, double b)
{
	try
	{
		if(!b)
			throw (b);
	}
	catch(double)
	{
		cout << "Cannot divide by zero.\n";
		exit(1);
	}

	return a / b;
}

int main()
{
	cout << Divible(10.0, 2.5) << endl;
	cout << Divible(10.0, 0.0);

	getch();
	return 0;
}
