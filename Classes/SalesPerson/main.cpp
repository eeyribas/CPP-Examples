#include <iostream>
#include <conio.h>
#include "sales_person.h"

using namespace std;

int main()
{
    SalesPerson s;

	s.ReadSales();
	s.WriteYearSales();

	getch();
    return 0;
}
