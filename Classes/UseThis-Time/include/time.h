#ifndef TIME_H
#define TIME_H

#include<iostream>

using namespace std;

class Time
{
public:
	Time(int = 0, int = 0, int = 0);

	Time &SetTime(int, int, int);
	Time &SetHour(int);
	Time &SetMinute(int);
	Time &SetSecond(int);

	int ReadHour() const;
	int ReadMinute() const;
	int ReadSecond() const;

	void PrintShort() const;
	void PrintStandart() const;

private:
	int hour;
	int minute;
	int second;
};

#endif // TIME_H
