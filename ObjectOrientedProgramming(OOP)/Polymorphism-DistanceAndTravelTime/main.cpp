#include <iostream>
#include <conio.h>

using namespace std;

class Distance
{
public:
    Distance(double f)
    {
		value = f;
	}

	virtual void TravTime()
	{
		cout << "Travel time at 60 mph : \n";
		cout << value / 60 << "\n";
	}

	double value;
};

class Metric : public Distance
{
public:
	Metric(double x) : Distance(x){}

	void TravTime()
	{
		cout << "Travel time at 100 mph : \n";
		cout << value / 100 << "\n";
	}
};

int main()
{
	Distance *p, mph(88.0);
	Metric kph(89);

	p = &mph;
	p->TravTime();

	p = &kph;
	p->TravTime();

	getch();
	return 0;
}
