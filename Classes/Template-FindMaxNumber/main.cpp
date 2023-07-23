#include <iostream>
#include <conio.h>

using namespace std;

template<class T>
T Maximum(T num_1, T num_2, T num_3)
{
	T maxim = num_1;

	if(num_2 > maxim)
		maxim = num_2;

	if(num_3 > maxim)
		maxim = num_3;

	return maxim;
}

int main()
{
	int int_1, int_2, int_3;
	cout << "Enter three numbers (int) = ";
	cin >> int_1 >> int_2 >> int_3;
	cout << "Maximum number (int) = \n\n" << Maximum(int_1, int_2, int_3);

	double double_1, double_2, double_3;
	cout << "\n\nEnter three numbers (double) = ";
	cin >> double_1 >> double_2 >> double_3;
	cout << "Maximum number (double) = " << Maximum(double_1, double_2, double_3);

	char c1, c2, c3;
	cout << "\n\nEnter three numbers (char) = ";
	cin >> c1 >> c2 >> c3;
	cout << "Maximum number = " << Maximum(c1,c2, c3);

    getch();
	return 0;
}
