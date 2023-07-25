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
	int bedrooms;
	int bathrooms;

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
};


class Office : public Building
{
	int phones;
	int exiting;
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
};


int  main()
{
	House h(2, 12, 4000, 6, 4);
    cout << "House\n\n";
	h.Show();

	Office o(4, 25, 2567.0, 1, 3);
	cout << "\n\nOffice\n";
	o.Show();

	getch();
	return 0;
}
