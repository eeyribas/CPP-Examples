#ifndef TIME_H
#define TIME_H

#include <iostream>

using namespace std;

class Time
{
public:
	Time(int = 0, int = 0, int = 0);
	void SetTime(int, int, int);
	void Write();
	void WriteStandart();

private:
	int hour;
	int minute;
	int second;
};

#endif // TIME_H
