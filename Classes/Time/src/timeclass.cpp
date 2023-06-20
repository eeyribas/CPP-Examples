#include "timeclass.h"

TimeClass::TimeClass(int h, int m, int s)
{
    SetTime(h, m, s);
}

void TimeClass::SetTime(int h, int m, int s)
{
    SetHour(h);
    SetMinute(m);
    SetSecond(s);
}

void TimeClass::SetHour(int h)
{
    hour = (h >= 0 && h < 24) ? h : 0;
}

void TimeClass::SetMinute(int m)
{
    minute = (m >= 0 && m < 60)? m : 0;
}

void TimeClass::SetSecond(int s)
{
    second = (s >= 0 && s < 60) ? s : 0;
}

int TimeClass::ReadHour()
{
    return hour;
}

int TimeClass::ReadMinute()
{
    return minute;
}

int TimeClass::ReadSecond()
{
    return second;
}

void TimeClass::WriteMin()
{
    cout << (hour < 10 ? "0" : "") << hour << ":"
         << (minute < 10 ? "0" : "") << minute;
}

void TimeClass::WriteStandart()
{
    cout << ((hour == 0 || hour == 12) ? 12 : hour & 12) <<
        ":" << (minute < 10 ? "0" : "") << minute <<
        ":" << (second < 10 ? "0" : "") << second <<
        (hour < 12 ? "AM" : "PM");
}
