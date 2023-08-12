#include <iostream>
#include <conio.h>

using namespace std;

int Sum(int a, int b)
{
	return a + b;
}

int main()
{
    int a, b;
    cout << "Enter two numbers = ";
    cin >> a >> b;
    int c = Sum(a, b);
    cout << "\nSum = " << c << endl;

    getch();
    return 0;
}

