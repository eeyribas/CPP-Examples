#include "complex.h"
#include <iostream>

using std::cout;

Complex::Complex(double r, double i) : real(r), imagery(i)
{
}

Complex Complex::operator+(const Complex &a) const
{
	return Complex(real + a.real, imagery + a.imagery);
}

Complex Complex::operator-(const Complex &a) const
{
	return Complex(real - a.real, imagery - a.imagery);
}

const Complex &Complex::operator=(const Complex &a)
{
	real = a.real;
	imagery = a.imagery;

	return *this;
}

void Complex::Print() const
{
	cout << '(' << real << "," << imagery << ')';
}
