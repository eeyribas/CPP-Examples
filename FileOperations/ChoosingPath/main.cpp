#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
	if(!argc){
		cout << "Error!";
		return 1;
	}

	ifstream fin(argv[1]);
	ofstream fout(argv[2]);
	if(!fout){
		cout << "Error!";
		return 1;
	}
	if(!fin){
		cout << "Not find file.\n";
		return 1;
	}

	char ch;
	fin.unsetf(ios::skipws);
	while(!fin.eof()){
		fin >> ch;
		if(ch == ' ')
			ch = '|';
		if(!fin.eof())
			fout << ch;
	}
	fin.close();
	fout.close();

	getch();
	return 0;
}
