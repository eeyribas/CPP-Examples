#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int number_1, number_2;
	cout << "Enter number_1 = ";
	cin >> number_1;
	cout << "Enter number_2 = ";
	cin >> number_2;
	int result = number_1 * number_2;
	cout << "Result = " << result << endl;

	getch();
	return 0;
}
