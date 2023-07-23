#include <iostream>
#include <conio.h>
#include <new>

using namespace std;

int main()
{
	double *ptr[50];
    for(int i = 0; i < 50; i++)
        ptr[i] = new double[5000];

	getch();
	return 0;
}
