#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

class Invertory
{
	char item[20];
	double cost;
	int on_hand;

public:
	Invertory(char *i, double c, int h){
		strcpy(this->item, i);
		this->cost = c;
		this->on_hand = h;
	}

	void Show();
};

void Invertory::Show()
{
	cout << this->item;
	cout << ":$" << this->cost;
	cout << " On Hand : " << this->on_hand << "\n";
}

int main()
{
	Invertory obj("wrench", 4.56, 7);
	obj.Show();

	getch();
	return 0;
}
