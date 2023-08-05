#include <iostream>
#include <conio.h>

using namespace std;

class Counter
{
public:
	int x;
	void Print()
	{
		cout << x << endl;
	}
};

int main()
{
	Counter counter, *counterPtr = &counter, &counterRef = counter;

	cout << "x = 7; = ";
	counter.x=7;
	counter.Print();

	cout << "x = 8; = ";
	counterRef.x=8;
	counterRef.Print();

	cout << "x = 10; = ";
	counterPtr->x=10;
	counterPtr->Print();

	getch();
	return 0;
}
