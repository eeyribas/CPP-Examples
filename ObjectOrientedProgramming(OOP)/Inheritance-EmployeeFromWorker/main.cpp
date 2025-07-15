#include <iostream>
#include <conio.h>
#include "employee.h"

using namespace std;

int main()
{
    Employee emp("Ali", "Aksel", 40.0, 10.0);
	emp.Print();

	getch();
    return 0;
}
