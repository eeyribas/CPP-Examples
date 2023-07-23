#ifndef SALES_PERSON_H
#define SALES_PERSON_H

class SalesPerson
{
public:
	SalesPerson();
	void ReadSales();
	void SalesSetting(int, double);
	void WriteYearSales();

private:
	double SumYearSales();
	double sales[12];
};

#endif // SALES_PERSON_H
