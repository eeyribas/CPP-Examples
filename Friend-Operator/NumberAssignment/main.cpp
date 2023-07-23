#include <iostream>
#include <conio.h>

using namespace std;

class Number
{
	friend void XAssignment(Number &, int);
public:
	Number()
	{
		x = 0;
	}

	void Print() const
	{
		cout << x << endl;
	}

private:
	int x;
};


void XAssignment(Number &c, int val)
{
	c.x = val;
}

int main()
{
	Number num;

	cout << "Firstly x = ";
	num.Print();

	cout << "X Assignment = ";
	XAssignment(num, 8);
	num.Print();

	getch();
	return 0;
}
