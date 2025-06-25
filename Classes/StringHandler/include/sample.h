#ifndef SAMPLE_H
#define SAMPLE_H

#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

class Sample
{
public:
	void Show();
	void Set(char *text);

private:
	char str[80];
};

#endif // SAMPLE_H
