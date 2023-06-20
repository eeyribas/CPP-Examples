#include<iostream>
#include<conio.h>
#include<cstring>

using namespace std;

class Record
{
	char name[40];
	char street[40];
	char city[30];
	char state[3];
	char zip[10];
public:
	void Store(char *n, char *s, char *c, char *t, char *z);
	void Display();
};

void Record::Store(char *n, char *s, char *c, char *t, char *z)
{
	strcpy(name, n);
	strcpy(street, s);
	strcpy(city, c);
	strcpy(state, t);
	strcpy(zip, z);
}

void Record::Display()
{
	cout << name << "\n";
	cout << street << "\n";
	cout << city << "\n";
	cout << state << "\n";
	cout << zip << "\n\n";
}

int main()
{
	Record record;
	record.Store("C. B. Turkle", "11 Pinetree LAne", "Waussa", "In", "45564");
	record.Display();

	getch();
	return 0;
}
