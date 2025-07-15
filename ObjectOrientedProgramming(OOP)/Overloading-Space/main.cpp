#include <iostream>
#include <conio.h>

using namespace std;

void Space(int count)
{
    for(; count; count--)
		cout << ' ';
}

void Space(int count, char ch)
{
	for(; count; count--)
		cout << ch;
}

int main()
{
	void (*fp_1)(int);
	void (*fp_2)(int, char);

	fp_1 = Space;
	fp_2 = Space;

	fp_1(22);
	cout << "\n";

	fp_2(30, 'x');
	cout << "\n";

	getch();
	return 0;
}
