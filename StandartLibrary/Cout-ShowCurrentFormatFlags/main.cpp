#include <iostream>
#include <conio.h>

using namespace std;

void ShowFlags();

int main()
{
	ShowFlags();
	cout.setf(ios::oct | ios::showbase | ios::fixed);
	ShowFlags();

	getch();
	return 0;
}

void ShowFlags()
{
	ios::fmtflags f = cout.flags();

	if (f & ios::skipws)
		cout << "skiwps on\n";
	else
		cout << "skiwps off\n";

	if (f & ios::left)
		cout << "left on\n";
	else
		cout << "left off\n";

	if (f & ios::right)
		cout << "right on\n";
	else
		cout << "right off\n";

	if (f & ios::internal)
		cout << "internal on\n";
	else
		cout << "internal off\n";

	if (f & ios::dec)
		cout << "dec on\n";
	else
		cout << "dec off\n";

	if (f & ios::oct)
		cout << "oct on\n";
	else
		cout << "oct off\n";

	if (f & ios::hex)
		cout << "hex on\n";
	else
		cout << "hex off\n";

	if (f & ios::showbase)
		cout << "showbase on\n";
	else
		cout << "showbase off\n";

	if (f & ios::showpoint)
		cout << "showpoint on\n";
	else
		cout << "showpoint off\n";

	if (f & ios::showpos)
		cout << "showpos on\n";
	else
		cout << "showpos off\n";

	if (f & ios::uppercase)
		cout << "uppercase on\n";
	else
		cout << "uppercase off\n";

	if (f & ios::scientific)
		cout << "scientificit on\n";
	else
		cout << "scientfitic off\n";

	if (f & ios::fixed)
		cout << "fixed on\n";
	else
		cout << "fixed off\n";

	if (f & ios::unitbuf)
		cout << "unitbuf on\n";
	else
		cout << "unitbuf off\n";

	if (f & ios::boolalpha)
		cout << "boolalpha on\n";
	else
		cout << "boolalpha off\n";

	cout << "\n";
}
