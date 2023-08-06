#include <iostream>
#include <conio.h>

using namespace std;
using std::cin;

int main()
{
	const int SIZE = 80;
	char buffer_1[SIZE], buffer_2[SIZE];

	cout << "Enter sentence =\n ";
	cin >> buffer_1;
	cout << "\ncin.get - string :\n" << buffer_1 << "\n\n";

	cin.get(buffer_2, SIZE);
	cout << "cin.get - string :\n" << buffer_2 << endl;

	getch();
	return 0;
}
