#include <iostream>
#include <conio.h>
#include <cstring>
#include <iomanip>

using namespace std;

void Center(char *s)
{
	int len = 40 + (strlen(s) / 2);
	cout << setw(len) << s << "\n";
}

int main()
{
	Center("Hello World!");
	Center("I like C++.");

	getch();
	return 0;
}
