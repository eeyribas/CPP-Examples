#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;
using std::hex;
using std::oct;
using std::dec;
using std::setbase;

int main()
{
	int n;
	cout << "Enter number = ";
	cin >> n;

	cout << n << " hex : " << hex << n << '\n' << dec << n << " oct : " << oct << n << '\n'
		 << setbase(10) << n << " dec : " << n << endl;

	getch();
	return 0;
}
