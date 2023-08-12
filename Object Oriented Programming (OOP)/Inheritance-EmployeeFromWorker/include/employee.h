#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "worker.h"
#include<iostream>

using namespace std;

class Employee : public Worker
{
public:
	Employee(const char *, const char *, double, double);
	double ReadSalary() const;
	void Print() const;

private:
	double salary;
	double hour;
};

#endif // EMPLOYEE_H
