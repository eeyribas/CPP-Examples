#include <iostream>
#include <conio.h>
#include <stdexcept>

using namespace std;
using std::runtime_error;

void Function3() throw (runtime_error)
{
	throw runtime_error("Function runtime_error.");
}

void Function2() throw (runtime_error)
{
	Function3();
}

void Function1() throw (runtime_error)
{
	Function2();
}

int main()
{
	try{
		Function1();
	} catch(runtime_error e){
		cout << "Error " << e.what() << endl;
	}

	getch();
	return 0;
}
