#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
	cout.precision(5);
	cout << "			x			log x			ln e\n\n";

	for(double x = 2.0; x <= 100.0; x++){
		cout.width(10);
		cout << x << "\n";
		cout.width(10);
		cout << log10(x) << "\n";
		cout.width(10);
		cout << log(x) << "\n";
	}

	getch();
	return 0;
}
