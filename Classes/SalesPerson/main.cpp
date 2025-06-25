#include <iostream>
#include <conio.h>
#include "salesperson.h"

using namespace std;

int main()
{
    SalesPerson s;
	s.ReadSales();
	s.WriteYearSales();

	getch();
    return 0;
}
