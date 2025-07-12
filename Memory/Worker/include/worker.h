#ifndef WORKER_H
#define WORKER_H

#include <iostream>

using namespace std;

class Worker
{
public:
	Worker(const char *, const char *);
	~Worker();

	const char *ReadName() const;
	const char *ReadSurname() const;
	static int ReadNumber();

private:
	char *name;
	char *surname;

	static int number;
};

#endif // WORKER_H
