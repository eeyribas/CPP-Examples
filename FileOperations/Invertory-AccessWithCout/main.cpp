#include <iostream>
#include <conio.h>
#include <fstream>
#include <cstring>

using namespace std;

#define SIZE 40

class Invertory
{
	char item[SIZE];
	int on_hand;
	double cost;

public:
	Invertory(char *i, int o, double d)
	{
		strcpy(item, i);
		on_hand = o;
		cost = d;
	}

	void Store(fstream &stream);
	void Retrieve(fstream &stream);

	friend ostream &operator<<(ostream &stream, Invertory obj);
	friend istream &operator>>(istream &stream, Invertory &obj);
};

ostream &operator<<(ostream &stream, Invertory obj)
{
	stream << obj.item << " : " << obj.on_hand;
	stream << " on hand $ = " << obj.cost << "\n";
	return stream;
}

istream &operator>>(istream &stream, Invertory &obj)
{
	cout << "Enter name = ";
	stream >> obj.item;
	cout << "Enter number = ";
	stream >> obj.on_hand;
	cout << "Enter value = ";
	stream >> obj.cost;

	return stream;
}

void Invertory::Store(fstream &stream)
{
	stream.write(item, SIZE);
	stream.write((char *)&on_hand, sizeof(int));
	stream.write((char *)&cost, sizeof(double));
}

void Invertory::Retrieve(fstream &stream)
{
	stream.read(item, SIZE);
	stream.read((char *)&on_hand, sizeof(int));
	stream.read((char *)&cost, sizeof(double));
}

int main()
{
	fstream inv("inv", ios::out | ios::binary);
	int i;

	Invertory pliere("pliers", 12, 4.95);
	Invertory hammers("hammers", 5, 9.45);
	Invertory wrenches("wrenches", 22, 13.9);
	Invertory temp(" ", 0, 0.0);

	if(!inv)
    {
		cout << "Not found.\n";
		return 1;
	}

	pliere.Store(inv);
	hammers.Store(inv);
	wrenches.Store(inv);
	inv.close();

	inv.open("inv", ios::in | ios::binary);
	if(!inv)
    {
		cout << "Not found.\n";
		return 1;
	}

	do
    {
		cout << "Record = # (-1 to quit) = ";
		cin >> i;
		if(i == -1)
            break;
		inv.seekg(i * (SIZE + sizeof(int) + sizeof(double)), ios::beg);
		temp.Retrieve(inv);
		cout << temp;
	}while(inv.good());

	inv.close();

	getch();
	return 0;
}
