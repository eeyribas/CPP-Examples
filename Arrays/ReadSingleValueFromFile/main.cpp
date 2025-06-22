#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main()
{
	char file_name[20];
	cout << "Enter file name = ";
	cin >> file_name;

	ifstream i_stream;
	i_stream.open(file_name);
	if (i_stream.fail()) {
		cout << "Not found file!!!" << endl;
		exit(-1);
	}

	int value;
	i_stream >> value;
	i_stream.close();
	cout << "Read Values = " << value << endl;

	getch();
	return 0;
}
