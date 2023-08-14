#include <iostream>
#include <conio.h>
#include <new>

using namespace std;

int main()
{
    double *p;
	do{
		try{
			p = new double[100000];
		} catch(bad_alloc xa){
			cout << "Alloction failure.\n";
			return 1;
		}
		cout << "Alloction OK.\n";
	} while(p);

	getch();
	return 0;
}
