#include<iostream>
#include<conio.h>
#include<iomanip>
#include<cmath>

using namespace std;
using std::ios;
using std::setiosflags;
using std::setprecision;

int main()
{
    double tmp = sqrt(2.0);

	cout << setiosflags(ios::fixed) << "setiosflags : \n" << endl;

	for(int i = 0; i <= 9; i++)
    {
		cout.precision(i);
		cout << tmp << '\n';
	}
	cout << "\nsetprecision : \n";

	for(int i = 0; i <= 9; i++)
		cout << setprecision(i) << tmp << '\n';

	getch();
	return 0;
}
