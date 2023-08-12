#include "employee.h"
#include<iomanip>

using std::ios;
using std::setiosflags;
using std::setprecision;

Employee::Employee(const char *first, const char *last, double firstHour, double firstSalary)
        : Worker(first, last)
{
    hour = firstHour;
    salary = firstSalary;
}

double Employee::ReadSalary() const
{
	return salary * hour;
}

void Employee::Print() const
{
	cout << "Employee::Print() is running.\n\n";
	Worker::Print();

	cout << ":$" << setiosflags(ios::fixed | ios::showpoint)
		 << setprecision(2) << ReadSalary() << endl;
}
