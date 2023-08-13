#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
	if(argc != 2){
		cout << "Usage WRITE<filename>\n";
		return 1;
	}

	ofstream out(argv[1]);
	if(!out){
		cout << "Cant open output file.\n";
		return 1;
	}

	char str[80];
	cout << "Press $ to exit\n";
	do{
		cout << ":";
		cin >> str;
		out << str << endl;
	} while(*str != '$');
	out.close();

	getch();
	return 0;
}
