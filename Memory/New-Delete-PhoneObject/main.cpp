#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

class Phone
{
	char name[40];
	char number[14];

public:
	void Store(char *n, char *num);
	void Show();
};

void Phone::Store(char *n, char *num)
{
	strcpy(name, n);
	strcpy(number, num);
}

void Phone::Show()
{
	cout << name << ": " << number;
	cout << "\n";
}

int main()
{
	Phone *p = new Phone;
	if(!p){
		cout << "Memory error.\n";
		return 1;
	}

	p->Store("Isaac Newton", "111 555-2323");
	p->Show();

	delete p;

	getch();
	return 0;
}
