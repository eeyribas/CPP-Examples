#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	cout << "First sentence." << endl;
	goto s_3;
s_1:
	cout << "\nSecond sentence." << endl;
	goto last;

s_2:
	cout << "\nThirdly sentence." << endl;
	goto s_1;

s_3:
	cout << "\nFourtly sentence." << endl;
	goto s_2;

last:
	getch();
	return 0;
}
