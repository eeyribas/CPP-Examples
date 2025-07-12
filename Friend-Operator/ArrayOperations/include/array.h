#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

using namespace std;
using std::ostream;
using std::istream;

class Array
{
public:
	Array(int = 10);
	Array(const Array &);
	~Array();

	int ReadSize() const;
	const Array &operator=(const Array &);
	bool operator==(const Array &) const;

	bool operator!=(const Array &right) const
	{
		return !(*this == right);
	}

	int operator[](int);
	const int &operator[](int) const;
	static int Read();

	friend ostream&operator<<(ostream&, const Array&);
	friend istream&operator>>(istream&, Array&);

private:
	int size;
	int *ptr;

	static int array_count;
};

#endif // ARRAY_H
