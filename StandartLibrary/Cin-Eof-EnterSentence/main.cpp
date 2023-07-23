#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	char ch;
	cout << "Firstly, cin.eof(): " << cin.eof() << "\nEnter sentence : \n";

	while((ch = cin.eof()) != EOF)
		cout.put(ch);

	cout << "\nThis is system EOF : " << ch;
	cout << "\nLastly, cin.eof() : " << cin.eof() << endl;

	getch();
	return 0;
}
