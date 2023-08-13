#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main()
{
	char fileName[20];
	ifstream dd;
	int a;

	cout << "Enter file name = ";
	cin >> fileName;

	dd.open(fileName);
	if(dd.fail()){
		cout << "Not found file!!!" << endl;
		exit(-1);
	}

	dd >> a;
	dd.close();
	cout << "Read Values = " << a << endl;

	getch();
	return 0;
}
