#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

class Card
{
public:
	void Store(char *t, char *name, int num);
	void Show();

private:
	char title[80];
	char person[40];
	int number;
};

void Card::Store(char *t, char *name, int num)
{
	strcpy(title, t);
	strcpy(person, name);
	number = num;
}

void Card::Show()
{
	cout << "Title = " << title << endl;
	cout << "Person name = " << person << endl;
	cout << "Number = " << number << endl;
}

int main()
{
	Card person_1, person_2, person_3;

	person_1.Store("Dune", "Frank", 234);
	person_2.Store("Ahmet", "Veli", 123);
	person_3.Store("Selim", "Yavuz", 345);

	person_1.Show();
	person_2.Show();
	person_3.Show();

	getch();
	return 0;
}
