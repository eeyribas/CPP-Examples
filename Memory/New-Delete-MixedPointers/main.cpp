#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float *f = new float;
	long *l = new long;
	char *c = new char;
	if (!f || !l || !c) {
		cout << "Error\n";
		return 0;
	}

	*f = 10.102;
	*l = 100000;
	*c = 'A';
	cout << *f << ' ' << *l << ' ' << *c;
	cout << "\n";

	delete f;
	delete l;
	delete c;

	getch();
	return 0;
}
