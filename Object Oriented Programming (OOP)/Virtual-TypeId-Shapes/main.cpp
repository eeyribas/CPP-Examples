#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <typeinfo>

using namespace std;

class Shape
{
public:
	virtual void Example() = 0;
};

class Rectangle : public Shape
{
public:
	void Example()
	{
		cout << "*****\n* *\n* *\n*****\n";
	}
};

class Triangle : public Shape
{
public:
	void Example()
	{
		cout << "*\n* *\n* *\n*****\n";
	}
};

class Line : public Shape
{
public:
	void Example()
	{
		cout << "*****\n";
	}
};

class NullShape : public Shape
{
public:
	void Example()
	{
	}
};

Shape *Generator()
{
	switch (rand() % 4)
	{
	case 0:
		return new Line;
	case 1:
		return new Rectangle;
	case 2:
		return new Triangle;
	case 3:
		return new NullShape;
	default:
		cout << "Enter wrong selection.\n";
		break;
	}
}

int main()
{
	Shape *p;

	for(int i = 0; i < 10; i++)
    {
		p = Generator();
		cout << typeid(*p).name() << endl;
		if(typeid(*p) != typeid(NullShape))
			p->Example();
	}

	getch();
	return 0;
}
