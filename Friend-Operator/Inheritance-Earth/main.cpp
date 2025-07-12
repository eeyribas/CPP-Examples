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
		result = 2 * distance * 3.1416;
	}

	friend ostream &operator<<(ostream &stream, Earth earth);

private:
    double result;
};

ostream &operator<<(ostream &stream, Earth earth)
{
	stream << "Distance = " << earth.distance << "\n";
	stream << "Days = " << earth.revolve << "\n";
	stream << "Result = " << earth.result << "\n";

	return stream;
}

int main()
{
	Earth earth(1200000, 65);
	cout << earth;

	getch();
	return 0;
}
