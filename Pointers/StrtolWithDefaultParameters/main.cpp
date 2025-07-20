#include <iostream>
#include <conio.h>

using namespace std;

long Strtol(const char *str, char **end, int base = 10)
{
	return strtol(str, end, base);
}

int main()
{
	char *str = "100234";
	char *p;

	long x = Strtol(str, &p, 16);
	cout << "Base = " << x << "\n";

	x = Strtol(str, &p, 10);
	cout << "Base default = " << x << "\n";

	x = Strtol(str, &p);
	cout << "Base = " << x << "\n";

	getch();
	return 0;
}
