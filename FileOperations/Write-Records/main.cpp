#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main()
{
	ofstream pout("phone");
	if(!pout){
		cout << "No Records found.\n";
		return 1;
	}

	pout << "Isaac Newton 415 555-3423\n";
	pout << "Roberd Goddard 231 555-2312\n";
	pout << "Enrico Fermi 202 555-1111\n";
	pout.close();

	getch();
	return 0;
}
