#include <iostream>
#include <conio.h>

using namespace std;

class Vehicle
{
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

private:
    int num_wheels;
	int range;
};

class Car : public Vehicle
{
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

private:
    int pessengers;
};

class Truck : public Vehicle
{
public:
	Truck(int l, int w, int r) : Vehicle(w, r)
	{
		load_limit = l;
	}

	void ShowT()
	{
		ShowV();
		cout << "Load limit = " << load_limit << "\n";
	}

private:
    int load_limit;
};

int main()
{
	Car car(5, 4, 300);
	cout << "Car Values \n";
	car.ShowC();

	Truck truck(30000, 12, 1200);
	cout << "\n\nTruck Values \n";
	truck.ShowT();

	getch();
	return 0;
}
