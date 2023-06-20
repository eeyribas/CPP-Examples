#ifndef POINT_H
#define POINT_H

#include<iostream>
#include "shape.h"

using namespace std;

class Point : public Shape
{
public:
	Point(int=0, int=0);
	void SetPoint(int, int);

	int xRead() const
	{
        return x;
	}

	int yRead() const
	{
		return y;
	}

	virtual void WriteName()const
	{
		cout<<"Point : ";
	}

	virtual void Write()const;

private:
	int x, y;
};

#endif // POINT_H
