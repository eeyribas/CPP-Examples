#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	const int sze = 80;
	char buffer[sze];

	cout << "Enter sentence = \n";
	cin.read(buffer, 20);
	cout << "\nSentence = \n\n";
	cout.write(buffer, cin.gcount());
	cout << endl;

	getch();
	return 0;
}
