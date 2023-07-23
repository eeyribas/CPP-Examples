#include "sales_person.h"
#include <iostream>
#include <conio.h>
#include<iomanip>

using namespace std;
using std::setprecision;
using std::setiosflags;
using std::ios;


SalesPerson::SalesPerson()
{
    for(int i = 0; i < 12; i++)
        sales[i] = 0.0;
}

void SalesPerson::ReadSales()
{
	double info;
	for(int i = 1; i <= 12; i++)
    {
		cout << "Enter months sales = " << i << ":";
		cin >> info;
		SalesSetting(i, info);
	}
}

void SalesPerson::SalesSetting(int month, double amount)
{
	if(month >= 1 && month <= 12 && amount > 0)
		sales[month - 1] = amount;
	else
		cout << "Error" << endl;
}

void SalesPerson::WriteYearSales()
{
	cout << setprecision(2) << setiosflags(ios::fixed|ios::showpoint)
		 << "\nSum Sales = $" << SumYearSales() << endl;
}

double SalesPerson::SumYearSales()
{
	double sum = 0.0;
	for(int i = 0; i < 12; i++)
		sum += sales[i];

	return sum;
}
