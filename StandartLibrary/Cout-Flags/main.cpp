#include <iostream>
#include <conio.h>

using namespace std;
using std::ios;

int main()
{
	int i = 1000;
	double d = 0.0947628;

	cout << "The value of the flags variable : " << cout.flags() << "\nWrite in original format as int and double :\n"
		 << i << '\t' << d << "\n\n";
	long originalFormat = cout.flags(ios::oct | ios::scientific);

	cout << "The value of the flags variable : " << cout.flags() << "\nspecified using the flags member function \n"
		 << "write in a new format as int and double :\n" << i << '\t' << d << "\n\n";

	cout.flags(originalFormat);
	cout << "flags value = " << cout.flags() << "\nRewrite your values in original format.\n"
		 << i << '\t' << d << endl;

	getch();
	return 0;
}
