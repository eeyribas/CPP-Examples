#include <iostream>
#include <conio.h>

using namespace std;

class Planet
{
protected:
	double distance;
	int revolve;

public:
	Planet(double d, int r)
	{
        distance = d;
		revolve = r;
	}
};


class Earth : public Planet
{
	double cir;

public:
	Earth(double d, int r) : Planet(d, r)
	{
		cir = distance * 2 * 3.1416;
	}

	void Show()
	{
		cout << "Distance from sun = " << distance << "\n";
		cout << "Days in orbit = " << revolve << "\n";
		cout << "Cir = " << cir << "\n";
	}
};


int main()
{
	Earth obj(930000000, 365);
	obj.Show();

	getch();
	return 0;
}
