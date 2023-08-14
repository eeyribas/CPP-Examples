#include <iostream>
#include <conio.h>
#include <new>
#include <cstdlib>

using namespace std;
using std::cerr;
using std::set_new_handler;


void SetNewHandler()
{
	cerr << " Call SetNewHandler.";
	abort();
}

int main()
{
	double *ptr[50];
	set_new_handler(SetNewHandler);

	for(int i = 0; i < 50; i++){
        ptr[i] = new double[5000];
        cout << "Allocate memory 5000 double: ptr[" << i << "]\n";
	}

	getch();
	return 0;
}
