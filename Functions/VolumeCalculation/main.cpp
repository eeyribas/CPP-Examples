#include <iostream>
#include <conio.h>

using namespace std;

int Volume(int length = 1, int weight = 3, int height = 5);

int main()
{
    cout << "Volume - 1 = " << Volume() << "\n\n"
         << "Volume - 2 = " << Volume(4) << "\n\n"
         << "Volume - 3 = " << Volume(3, 5) << "\n\n"
         << "Volume - 4 = " << Volume(6, 11, 4) << endl;

	getch();
	return 0;
}

int Volume(int a, int b, int c)
{
	return a * b * c;
}
