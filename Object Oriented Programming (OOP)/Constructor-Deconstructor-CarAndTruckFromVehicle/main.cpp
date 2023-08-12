#include <iostream>
#include <conio.h>

using namespace std;

class Vehicle
{
	int num_wheels;
	int range;

public:
	Vehicle(int w, int r)
	{
		num_wheels = w;
		range = r;
	}

	void ShowV()
	{
		cout << "Wheels = " << num_wheels << "\n";
		cout << "Range = " << range << "\n";
	}
};

class Car : public Vehicle
{
	int pessengers;

public:
	Car(int p, int w, int r) : Vehicle(w, r)
	{
		pessengers = p;
	}

	void ShowC()
	{
		ShowV();
		cout << "Pessengers = " << pessengers << "\n";
	}
};

class Truck : public Vehicle
{
	int load_limit;

public:
	Truck(int l, int w, int r) : Vehicle(w, r)
	{
		load_limit = l;
	}

	void ShowT()
	{
		ShowV();
		cout << "Loadlimit = " << load_limit << "\n";
	}
};

int main()
{
	Car c(5, 4, 300);
	Truck t(30000, 12, 1200);

	cout << "Car Values \n";
	c.ShowC();
	cout << "\n\nTruck Values \n";
	t.ShowT();

	getch();
	return 0;
}
