#include "worker.h"
#include <cstring>
#include <cassert>

int Worker::number = 0;

Worker::Worker(const char *first, const char *last)
{
	name = new char[strlen(first) + 1];
	assert(name !=0 );
	strcpy(name, first);

	surname = new char[strlen(last) + 1];
	assert(surname != 0);
	strcpy(surname, last);

	++number;
	cout << "Constructor : " << name << ' ' << surname << "." << endl;
}

Worker::~Worker()
{
	cout << "~Deconstructor : " << name << ' ' << surname << endl;
	delete[] name;
	delete[] surname;
	--number;
}

const char *Worker::ReadName() const
{
	return name;
}

const char *Worker::ReadSurname() const
{
	return surname;
}

int Worker::ReadNumber()
{
	 return number;
}
