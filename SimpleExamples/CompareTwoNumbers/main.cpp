#include <iostream>
#include <conio.h>

using namespace std;

void Compare(int a, int b)
{
	if(a > b)
    {
		cout << "Max = " << a << endl;
		cout << "Min = " << b << endl;
	}
	else
        {
		cout << "Max = " << b << endl;
		cout << "Min = " << a << endl;
	}
}

int main()
{
	int a, b;
	cout << "Enter number = ";
	cin >> a;
	cout << "Enter other number = ";
	cin >> b;
	Compare(a, b);

	getch();
	return 0;
}
