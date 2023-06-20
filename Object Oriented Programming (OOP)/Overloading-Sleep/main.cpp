#include<iostream>
#include<conio.h>

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
	long i;
	for(; n; n--)
		for(i = 0; i < DELAY; i++);
}

void Sleep(char *n){
	long i;
	int j = atoi(n);
	for(; j; j--)
		for(i = 0; i < DELAY; i++);
}
