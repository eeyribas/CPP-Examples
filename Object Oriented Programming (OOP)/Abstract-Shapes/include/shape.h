#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
public:
	virtual double Area()const
	{
		return 0;
	}

	virtual double Volume()const
	{
		return 0;
	}

	virtual void WriteName()const=0;
	virtual void Write()const=0;
};

#endif // SHAPE_H
