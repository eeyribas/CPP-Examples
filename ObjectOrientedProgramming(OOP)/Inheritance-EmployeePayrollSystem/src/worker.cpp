#include "worker.h"
#include <cstring>
#include <cassert>

Worker::Worker(const char *first, const char *last)
{
	name = new char[strlen(first) + 1];
	assert(name != 0);
	strcpy(name, first);

	surname = new char[strlen(last) + 1];
	assert(surname != 0);
	strcpy(surname, last);
}

Worker::~Worker()
{
	delete[] name;
	delete[] surname;
}

void Worker::Print() const
{
	cout << name << " " << surname;
}
