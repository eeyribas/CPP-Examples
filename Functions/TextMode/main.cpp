#include <iostream>
#include <cctype>
#include <conio.h>

using namespace std;

const int ignore = 0;
const int upper = 1;
const int lower = 2;

void Print(char *str, int how = -1)
{
	static int old_case = ignore;
	if (how < 0)
        how = old_case;

	while (*str) {
		switch (how) {
		case upper:
			cout << (char)toupper(*str);
			break;
		case lower:
			cout << (char)tolower(*str);
			break;
		default:
			cout << *str;
			break;
		}
		str++;
	}

	old_case = how;
}

int main()
{
	Print("Hello There\n", ignore);
	cout << "\n\n";
	Print("Hello There\n", upper);
	cout << "\n\n";
	Print("Hello There\n");
	cout << "\n\n";
	Print("Hello There\n", lower);
	cout << "\n\n";
	Print("Thats all\n");

	getch();
	return 0;
}
