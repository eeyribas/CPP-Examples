#include <iostream>
#include <conio.h>

using namespace std;

long Strtol(const char *s, char **end, int base = 10)
{
	return strtol(s, end, base);
}

int main()
{
	char *s = "100234";
	char *p;

	long x = Strtol(s, &p, 16);
	cout << "Base = " << x << "\n";

	x = Strtol(s, &p, 10);
	cout << "Base default = " << x << "\n";

	x = Strtol(s, &p);
	cout << "Base = " << x << "\n";

	getch();
	return 0;
}
