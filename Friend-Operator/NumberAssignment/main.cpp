#include <iostream>
#include <conio.h>

using namespace std;

class Number
{
public:
	Number()
	{
		x = 0;
	}

	void Print() const
	{
		cout << x << endl;
	}

    friend void Assignment(Number&, int);

private:
	int x;
};

void Assignment(Number &num, int val)
{
	num.x = val;
}

int main()
{
	Number num;
	cout << "Firstly x = ";
	num.Print();
	cout << "X Assignment = ";
	Assignment(num, 8);
	num.Print();

	getch();
	return 0;
}
