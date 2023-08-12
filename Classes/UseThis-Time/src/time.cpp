#include "time.h"

Time::Time(int h, int m, int s)
{
	SetTime(h, m, s);
}

Time &Time::SetTime(int h, int m, int s)
{
	SetHour(h);
	SetMinute(m);
	SetSecond(s);

	return *this;
}

Time &Time::SetHour(int h)
{
	hour = (h >= 0 && h < 24) ? h : 0;

	return *this;
}

Time &Time::SetMinute(int m)
{
	minute = (m >= 0 && m < 60) ? m : 0;

	return *this;
}

Time &Time::SetSecond(int s)
{
	second = (s >= 0 && s < 60) ? s : 0;

	return *this;
}

int Time::ReadHour() const
{
	return hour;
}

int Time::ReadMinute() const
{
	return minute;
}

int Time::ReadSecond() const
{
	return second;
}

void Time::PrintShort() const
{
	cout << (hour < 10 ? "0" : "") << hour << ":" << (minute < 10 ? "0" : "" ) << minute;
}

void Time::PrintStandart() const
{
	cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << (minute < 10 ? "0" : "")
		 << minute << ":" << (second < 10 ? "0" : "") << second << (hour < 12 ? "AM" : "PM");
}
