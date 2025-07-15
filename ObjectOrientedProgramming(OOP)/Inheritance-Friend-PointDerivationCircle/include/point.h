#ifndef POINT_H
#define POINT_H

#include<iostream>

using std::ostream;

class Point
{
	friend ostream &operator<<(ostream&, const Point&);

public:
	Point(int = 0, int = 0);
	void Setting(int, int);
	int ReadX() const;
	int ReadY() const;

protected:
	int x, y;
};

#endif // POINT_H
