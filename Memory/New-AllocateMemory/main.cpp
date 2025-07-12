#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	double *ptr[50];
	for (int i = 0; i < 50; i++) {
		ptr[i] = new double[5000000];
        if (ptr[i] == 0) {
            cout << "Error : ptr[" << i << "]\n";
            break;
        } else {
            cout << "Allocate memory 5000000 double ptr[" << i << "]\n";
        }
	}

	getch();
	return 0;
}
