#include <iostream>
#include <conio.h>

using namespace std;

ostream &Tabs(ostream &stream)
{
	stream << '\t' << '\t' <<' \t';
	stream.width(20);

	return stream;
}

int main()
{
	cout << Tabs << "Testing\n";

	getch();
	return 0;
}
