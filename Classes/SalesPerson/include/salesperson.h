#ifndef SALESPERSON_H
#define SALESPERSON_H

#include <iostream>
#include <conio.h>

class SalesPerson
{
public:
	SalesPerson();

	void ReadSales();
	void SalesSettings(int, double);
	void WriteYearSales();

private:
	double SumYearSales();

	double sales[12];
};

#endif // SALESPERSON_H
