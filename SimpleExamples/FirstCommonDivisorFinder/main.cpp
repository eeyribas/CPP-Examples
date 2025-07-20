#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a, b, d, minimum;
	cout << "Enter two numbers = ";
	cin >> a >> b;
	minimum = a > b ? b : a;

	for (d = 2; d < minimum; d++) {
        if (((a % d) == 0) && ((b % d) == 0))
            break;
	}

	if (d == minimum) {
		cout << "No common denominator!\n";
		return 0;
	}

	cout << "Least common denominator = " << d << "\n";

	getch();
	return 0;
}
