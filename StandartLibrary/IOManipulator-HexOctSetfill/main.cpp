#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
    cout << hex << 100 << endl;
	cout << oct << 100 << endl;
	cout << setfill('X') << setw(10);
	cout << 100 << "Hello" << endl;

	getch();
	return 0;
}
