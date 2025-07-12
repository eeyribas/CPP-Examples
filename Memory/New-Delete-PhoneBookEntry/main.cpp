#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

class Phone
{
public:
	void Store(char *n, char *num);
	void Show();

private:
    char name[40];
	char number[14];
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
	if (!p) {
		cout << "Memory error.\n";
		return 1;
	}

	p->Store("Isaac Newton", "111 555-2323");
	p->Show();

	delete p;

	getch();
	return 0;
}
