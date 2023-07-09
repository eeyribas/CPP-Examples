#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
public:
	Complex(double = 0.0, double = 0.0);
	Complex operator + (const Complex &) const;
	Complex operator - (const Complex &) const;
	const Complex &operator=(const Complex &);
	void Print() const;

private:
	double real;
	double imagery;
};

#endif // COMPLEX_H
