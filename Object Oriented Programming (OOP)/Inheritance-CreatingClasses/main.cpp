#include <iostream>
#include <conio.h>

using namespace std;

class B1
{
public:
	B1()
	{
		cout << "B1 constructor\n";
	}

	~B1()
	{
		cout << "B1 deconstructor\n";
	}
};

class B2
{
public:
	B2()
	{
		cout << "B2 constructor\n";
	}

	~B2()
	{
		cout << "B2 deconstructor\n";
	}
};

class D : public B1, public B2
{
public:
	D()
	{
		cout << "D constructor\n";
	}

	~D()
	{
		cout << "D deconstructor\n";
	}
};

int main()
{
	D obj;

	getch();
	return 0;
}
