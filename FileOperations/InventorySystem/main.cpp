#include <iostream>
#include <fstream>
#include <cstring>
#include <conio.h>

#define SIZE 40

using namespace std;

class Inventory
{
public:
	Inventory(char *ch, int on, double d);

	void Store(fstream &stream);
	void Retrieve(fstream &stream);

	friend ostream &operator<<(ostream &stream, Inventory obj);
	friend istream &operator>>(istream &stream, Inventory &obj);

private:
    char item[SIZE];
	int on_hand;
	double cost;
};

Inventory::Inventory(char *ch, int on, double d)
{
    strcpy(item, ch);
    on_hand = on;
    cost = d;
}

void Inventory::Store(fstream &stream)
{
	stream.write(item, SIZE);
	stream.write((char*)&on_hand, sizeof(int));
	stream.write((char*)&cost, sizeof(double));
}

void Inventory::Retrieve(fstream &stream)
{
	stream.read(item, SIZE);
	stream.read((char*)&on_hand, sizeof(int));
	stream.read((char*)&cost, sizeof(double));
}

ostream &operator<<(ostream &stream, Inventory obj)
{
	stream << obj.item << " : " << obj.on_hand;
	stream << " on hand $ = " << obj.cost << endl;

	return stream;
}

istream &operator>>(istream &stream, Inventory &obj)
{
	cout << "Enter name = ";
	stream >> obj.item;
	cout << "Enter number = ";
	stream >> obj.on_hand;
	cout << "Enter value = ";
	stream >> obj.cost;

	return stream;
}

int main()
{
	Inventory pliere("pliers", 12, 4.95);
	Inventory hammers("hammers", 5, 9.45);
	Inventory wrenches("wrenches", 22, 13.9);
	Inventory temp(" ", 0, 0.0);

	fstream inv("inv", ios::out | ios::binary);
	if (!inv) {
		cout << "Not found.\n";
		return 1;
	}

	pliere.Store(inv);
	hammers.Store(inv);
	wrenches.Store(inv);
	inv.close();

	inv.open("inv", ios::in | ios::binary);
	if (!inv) {
		cout << "Not found.\n";
		return 1;
	}

	int i;
	do {
		cout << "Record = # (-1 to quit) = ";
		cin >> i;
		if (i == -1)
            break;
		inv.seekg(i * (SIZE + sizeof(int) + sizeof(double)), ios::beg);
		temp.Retrieve(inv);
		cout << temp;
	} while (inv.good());

	inv.close();

	getch();
	return 0;
}
