#ifndef POINT_H
#define POINT_H

#include<iostream>

using std::ostream;

class Point
{
	friend ostream &operator<<(ostream &, const Point &);

public:
	Point(int = 0, int = 0);
	void SetPoint(int, int);

	int ReadX() const
	{
		return x;
	}

	int ReadY() const
	{
		return y;
	}

protected:
	int x;
	int y;
};

#endif // POINT_H
