#include <iostream>
#include <conio.h>
#include <cstring>
#include <fstream>

using namespace std;

int main()
{
	ofstream out("test", ios::out | ios::binary);
	if(!out){
		cout << "Output file not found\n";
		return 1;
	}
	double num = 100.45;
	char str[] = "This is a test";

	out.write((char *) &num, sizeof(double));
	out.write(str, strlen(str));
	out.close();

	getch();
	return 0;
}
