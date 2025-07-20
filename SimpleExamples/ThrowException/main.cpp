#include <iostream>
#include <exception>
#include <conio.h>

using namespace std;
using std::exception;

void ThrowException()
{
	try {
        cout << "Throw Exception Function\n";
        throw exception();
	} catch(exception e) {
		cout << "Process throw exception.\n";
		throw;
	}

	cout << "Text isn't printing.\n";
}

int main()
{
	try {
		ThrowException();
		cout << "Text isn't printing.\n";
	} catch(exception e) {
        cout << "Print.\n";
	}
	cout << "Finish." << endl;

	getch();
	return 0;
}
