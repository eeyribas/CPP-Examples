#include <iostream>
#include <conio.h>

using namespace std;

void Print(int n);

int main()
{
	int n;
	cout << "Enter limit (n) = ";
	cin >> n;
	Print(n);

	getch();
	return 0;
}

void Print(int n)
{
	for (int i = 0; i < n + 1; i++)
        cout << i << '\t';
	cout << endl;
}
