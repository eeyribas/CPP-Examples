#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	float *f = new float;
	int *i = new int;
	if (!f || !i) {
		cout << "Memory error.\n";
		return 1;
	}

	*f = 10.101;
	*i = 100;
	cout << *f << ' ' << *i << '\n';

	delete f;
	delete i;

	getch();
	return 0;
}
