#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

class Inventory
{
	char item[20];
	double cost;
	int on_hand;

public:
	Inventory(char *i, double c, int o){
		strcpy(item, i);
		cost = c;
		on_hand = o;
	}

	void Show();
};

void Inventory::Show()
{
	cout << item;
	cout << ":$" << cost;
	cout << " On hand : " << on_hand << "\n";
}

int main()
{
	Inventory obj("wrench", 4.95, 4);
	obj.Show();

	getch();
	return 0;
}
