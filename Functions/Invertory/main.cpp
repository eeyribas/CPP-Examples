#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

class Invertory
{
public:
	Invertory(char *i, double c, int h)
	{
		strcpy(this->item, i);
		this->cost = c;
		this->on_hand = h;
	}

	void Show();

private:
    char item[20];
	double cost;
	int on_hand;
};

void Invertory::Show()
{
	cout << this->item;
	cout << ": $" << this->cost;
	cout << " On Hand : " << this->on_hand << "\n";
}

int main()
{
	Invertory inv("wrench", 4.56, 7);
	inv.Show();

	getch();
	return 0;
}
