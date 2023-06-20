#ifndef TIMECLASS_H
#define TIMECLASS_H

#include <iostream>

using namespace std;

class TimeClass
{
public:
	TimeClass(int=0, int=0, int=0);

	void SetTime(int, int, int);
	void SetHour(int);
	void SetMinute(int);
	void SetSecond(int);

	int ReadHour();
	int ReadMinute();
	int ReadSecond();

	void WriteMin();
	void WriteStandart();

private:
	int hour;
	int minute;
	int second;
};

#endif // TIMECLASS_H
