#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	union{
		unsigned char bytes[8];
		double value;
	};

	value = 859345.324;
	for(int i = 0; i < 8; i++)
        cout << (int)bytes[i] << " ";

	getch();
	return 0;
}
