#include <iostream>
#include <conio.h>

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
	cout << Atn << "High voltage circuit\n";
	cout << Note << "Turn off all lights\n";

	getch();
	return 0;
}
