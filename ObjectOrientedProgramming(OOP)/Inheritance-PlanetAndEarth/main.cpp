#include <iostream>
#include <conio.h>

using namespace std;

class Planet
{
public:
	Planet(double d, int r)
	{
        distance = d;
		revolve = r;
	}

protected:
	double distance;
	int revolve;
};

class Earth : public Planet
{
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

private:
    double cir;
};

int main()
{
	Earth earth(930000000, 365);
	earth.Show();

	getch();
	return 0;
}
