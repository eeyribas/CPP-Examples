#ifndef WORKER_H
#define WORKER_H

#include<iostream>

using namespace std;

class Worker
{
public:
	Worker(const char *, const char *);
	~Worker();
    void Print() const;

private:
	char *name;
	char *surname;
};

#endif // WORKER_H
