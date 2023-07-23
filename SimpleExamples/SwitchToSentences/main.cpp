#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	cout << "First sentence." << endl;
	goto s3;
s1:
	cout<<"\nSecond sentence."<<endl;
	goto last;

s2:
	cout<<"\nThirdly sentence."<<endl;
	goto s1;

s3:
	cout<<"\nFourtly sentence."<<endl;
	goto s2;

last:
	getch();
	return 0;
}
