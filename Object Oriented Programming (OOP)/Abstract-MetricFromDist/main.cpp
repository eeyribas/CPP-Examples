#include <iostream>
#include <conio.h>

using namespace std;

class Dist
{
public:
	double d;

	Dist(double f)
	{
		d = f;
	}

	virtual void TravTime()
	{
		cout << "Travel time at 60 mph : \n";
		cout << d / 60 << "\n";
	}
};

class Metric : public Dist
{
public:
	Metric(double x) : Dist(x){}

	void TravTime()
	{
		cout << "Travel time at 100 mph : \n";
		cout << d / 100 << "\n";
	}
};

int main()
{
	Dist *p, mph(88.0);
	Metric kph(89);

	p = &mph;
	p->TravTime();

	p = &kph;
	p->TravTime();

	getch();
	return 0;
}
