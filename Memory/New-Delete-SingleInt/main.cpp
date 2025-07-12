#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int *p = new int(9);
	if (!p) {
		cout << "Memory error.\n";
		return 1;
	}
	cout << "p : " << *p << "\n";
	delete p;

	getch();
	return 0;
}
