#include <iostream>
#include <conio.h>

using namespace std;

class Planet
{
protected:
	double distance;
	int revolve;

public:
	Planet(double d, int r){
		distance = d;
		revolve = r;
	}
};

class Earth : public Planet
{
	double cir;

public:
	Earth(double d, int r) : Planet(d, r){
		cir = 2 * distance * 3.1416;
	}

	friend ostream &operator<<(ostream &stream, Earth obj);
};

ostream &operator<<(ostream &stream, Earth obj)
{
	stream << "Distance= " << obj.distance << "\n";
	stream << "Days= " << obj.revolve << "\n";
	stream << "Cir= " << obj.cir << "\n";

	return stream;
}

int main()
{
	Earth obj(1200000, 65);
	cout << obj;

	getch();
	return 0;
}
