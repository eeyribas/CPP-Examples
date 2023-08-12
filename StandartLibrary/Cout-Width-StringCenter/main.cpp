#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

void Center(char *s)
{
	int len = 40 + (strlen(s) / 2);
	cout.width(len);
	cout << s << "\n";
}

int main()
{
	Center("Hi there!");
	Center("I love C++!");

	getch();
	return 0;
}
