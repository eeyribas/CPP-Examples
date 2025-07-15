#ifndef POINT_H
#define POINT_H

#include <iostream>

using std::ostream;

class Point
{
public:
	Point(int = 0, int = 0);

	void Setting(int, int);
	int ReadX() const;
	int ReadY() const;

private:
    friend ostream &operator<<(ostream&, const Point&);

protected:
	int x, y;
};

#endif // POINT_H
