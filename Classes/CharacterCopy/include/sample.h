#ifndef SAMPLE_H
#define SAMPLE_H

#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

class Sample
{
	char s[80];
public:
	void Show();
	void Set(char *str);
};

#endif // SAMPLE_H
