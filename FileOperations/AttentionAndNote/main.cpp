#include <iostream>
#include <conio.h>
#include <fstream>
#include <iomanip>

using namespace std;

ostream &Atn(ostream &stream)
{
	stream << "Attention = ";
	return stream;
}

ostream &Note(ostream &stream)
{
	stream << "Please Note = ";
	return stream;
}

int main()
{
	ofstream out("test");
	if(!out)
    {
		cout << "Not find file.\n";
		return 1;
	}

	cout << Atn << "High voltage circuit.\n";
	cout << Note << "Turn off all lights.\n";

	out << Atn << "High voltage circuit.\n";
	out << Note << "Turn off all lights.\n";

	getch();
	return 0;
}
