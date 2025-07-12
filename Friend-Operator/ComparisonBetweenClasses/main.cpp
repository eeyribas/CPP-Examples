#include <iostream>
#include <conio.h>

using namespace std;

class Truck;

class Car
{
public:
	Car(int p, int s)
	{
		pessengers = p;
		speed = s;
	}

	friend int Greater(Car car, Truck truck);

private:
    int pessengers;
	int speed;
};

class Truck
{
public:
	Truck(int w, int s)
	{
		weight = w;
		speed = s;
	}

	friend int Geater(Car car, Truck truck);

	int weight;
	int speed;
};

int Greater(Car car, Truck truck)
{
	return car.speed - truck.speed;
}

int main()
{
	Car car_1(6, 55), car_2(2, 120);
	Truck truck_1(10000, 55), truck_2(20000, 72);

	cout << "Comparing car_1 and truck_1.\n";
	int t = Greater(car_1, truck_1);
	if (t < 0)
		cout << "Truck is faster.\n";
	else if (t == 0)
		cout << "Their speeds are equal.\n";
	else
		cout << "Car is faster.\n";

	cout << "\n\nComparing car_2 and truck_2.\n";
	t = Greater(car_2, truck_2);
	if (t < 0)
        cout << "Truck is faster.\n";
	else if (t == 0)
		cout << "Their speeds are equal.\n";
	else
		cout << "Car is faster.\n";

	getch();
	return 0;
}
