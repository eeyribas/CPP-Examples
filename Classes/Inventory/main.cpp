#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

class Inventory
{
public:
	Inventory(char *i, double c, int o)
	{
		strcpy(item, i);
		cost = c;
		on_hand = o;
	}

	void Show()
    {
        cout << item;
        cout << " : $" << cost;
        cout << " On hand : " << on_hand << "\n";
    }

private:
	char item[20];
	double cost;
	int on_hand;
};

int main()
{
	Inventory inv("wrench", 4.95, 4);
	inv.Show();

	getch();
	return 0;
}
