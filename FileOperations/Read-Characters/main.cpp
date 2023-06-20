#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main()
{
	ifstream in("test", ios::in | ios::binary);
	if(!in){
		cout << "Output file not found\n";
		return 1;
	}

	double num;
	char str[80];
	in.read((char *) &num, sizeof(double));
	in.read(str, 14);
	str[14] = '\0';
	in.close();

	getch();
	return 0;
}
