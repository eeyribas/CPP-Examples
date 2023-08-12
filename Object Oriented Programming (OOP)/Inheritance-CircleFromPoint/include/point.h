#ifndef POINT_H
#define POINT_H

#include <iostream>

using namespace std;

class Point
{
public:
	Point(int = 0, int = 0);
	~Point();

protected:
	int x;
	int y;
};

#endif // POINT_H
