#include <iostream>
#include <conio.h>

using namespace std;

#define DELAY 100000

void Sleep(int n);
void Sleep(char *n);

int main()
{
    cout << " . ";
	Sleep(3);
	cout << " . ";
	Sleep("2");
	cout << " . ";

	getch();
    return 0;
}

void Sleep(int n)
{
	for(; n; n--)
		for(long i = 0; i < DELAY; i++);
}

void Sleep(char *n)
{
	int j = atoi(n);
	for(; j; j--)
		for(long i = 0; i < DELAY; i++);
}
