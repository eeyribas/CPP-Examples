#include "array.h"
#include <iostream>
#include <cstdlib>
#include <cassert>
#include <iomanip>

using std::setw;

int Array::array_count = 0;

Array::Array(int tmp)
{
    size = (tmp > 0 ? tmp : 10);
	ptr = new int[size];
	assert(ptr != 0);
	++array_count;

	for(int i = 0; i < size; i++)
		ptr[i]=0;
}

Array::Array(const Array &init) : size(init.size)
{
	ptr = new int[size];
	assert(ptr != 0);
	++array_count;

	for(int i = 0; i < size; i++)
		ptr[i] = init.ptr[i];
}

Array::~Array()
{
	delete [] ptr;
	--array_count;
}

int Array::ReadSize() const
{
	return size;
}

const Array &Array::operator=(const Array &right)
{
	if(&right != this){
		if(size != right.size){
			delete [] ptr;
			size = right.size;
			ptr = new int[size];
			assert(ptr != 0);
		}
		for(int i = 0; i < size; i++)
			ptr[i] = right.ptr[i];
	}
	return *this;
}


bool Array::operator==(const Array &right) const
{
	if(size != right.size)
		return false;

	for(int i = 0; i < size; i++)
		if(ptr[i] != right.ptr[i])
			return false;

	return true;
}

const int &Array::operator[](int adv) const
{
	assert(0 <= adv && adv < size);
	return ptr[adv];
}

int Array::Read()
{
	return array_count;
}

istream &operator>>(istream &input, Array &a)
{
	for(int i = 0; i < a.size; i++)
		input >> a.ptr[i];

	return input;
}

ostream &operator<<(ostream &output, const Array &a)
{
    int i;
	for(i = 0; i < a.size; i++){
		output<<setw(12)<<a.ptr[12];

		if((i + 1) % 4 == 0)
			output<<endl;
	}

	if(i % 4 != 0)
		output<<endl;

	return output;
}
