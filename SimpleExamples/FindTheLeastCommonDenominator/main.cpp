#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a, b, d, minim;

	cout << "Enter two numbers = ";
	cin >> a >> b;
	minim = a > b ? b : a;

	for(d = 2; d < minim; d++) {
        if(((a % d) == 0) && ((b % d) == 0))
            break;
	}

	if(d == minim) {
		cout << "No common denominator!\n";
		return 0;
	}
	cout << "Least common denominator = " << d << "\n";

	getch();
	return 0;
}
