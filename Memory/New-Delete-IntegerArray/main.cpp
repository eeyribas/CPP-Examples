#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int *p = new int[5];
	if (!p) {
		cout << "Memory error.\n";
		return 1;
	}

	for (int i = 0; i < 5; i++)
        p[i] = i;
	for (int i = 0; i < 5; i++) {
		cout << "p[" << i << "] = ";
		cout << p[i] << "\n";
	}

	delete[] p;

	getch();
	return 0;
}
