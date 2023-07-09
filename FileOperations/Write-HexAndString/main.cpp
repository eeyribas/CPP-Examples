#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main()
{
	ofstream fout("test");
	if(!fout){
		cout << "Cannot open output file.\n";
		return 1;
	}

	fout << "Hello\n";
	fout << 100 << ' ' << hex << 100 << endl;
	fout.close();

	ifstream fin("test");
	if(!fin){
		cout << "Cant open input file.\n";
		return 1;
	}

	char str[80];
	int i;
	fin >> str >> i;
	cout << str << ' ' << i << endl;
	fin.close();

	getch();
	return 0;
}
