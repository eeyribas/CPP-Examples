#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

struct StType
{
	StType(double b, char *n);
	void Show();

private:
	double balance;
	char name[40];
};

StType::StType(double b, char *n)
{
	balance = b;
	strcpy(name, n);
}

void StType::Show()
{
	cout << "Name : " << name;
	cout << " : $ " << balance;
	if(balance < 0.0)
        cout << "***";
	cout << "\n";
}

int main()
{
	StType acc_1(100.12, "Johnson");
	StType acc_2(-12.34, "Hedrick");
	acc_1.Show();
	acc_2.Show();

	getch();
	return 0;
}
