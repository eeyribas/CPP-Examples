#include <iostream>
#include <conio.h>

using namespace std;

class Building
{
protected:
	int floors;
	int rooms;
	double footage;
};

class House : public Building
{
public:
    House(int f, int r, double d, int b, int ba)
	{
        floors = f;
		rooms = r;
		footage = d;
		bedrooms = b;
		bathrooms = ba;
	}

	void Show()
	{
		cout << "Floors = " << floors << "\n" << "Rooms = " << rooms << "\n";
		cout << "Footage = " << footage << "\n" << "Bedrooms = " << bedrooms << "\n";
		cout << "Bathrooms = " << bathrooms << "\n";
	}

private:
    int bedrooms;
	int bathrooms;
};

class Office : public Building
{
public:
    Office(int f, int r, double fo, int p, int e)
    {
        floors = f;
		rooms = r;
		footage = fo;
		phones = p;
		exiting = e;
	}

	void Show()
	{
		cout << "\nFloors = " << floors << "\n" << "Rooms = " << rooms << "\n";
		cout << "Footage = " << footage << "\n" << "Phones = " << phones << "\n";
		cout << "Exiting = " << exiting << "\n";
	}

private:
    int phones;
	int exiting;
};

int  main()
{
	House house(2, 12, 4000, 6, 4);
    cout << "House\n\n";
	house.Show();

	Office office(4, 25, 2567.0, 1, 3);
	cout << "\n\nOffice\n";
	office.Show();

	getch();
	return 0;
}
