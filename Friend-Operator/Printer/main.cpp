#include <iostream>
#include <conio.h>

using namespace std;

class Printer2;

class Printer1
{
public:
	Printer1()
	{
		priting = 0;
	}

	void SetPrint(int status)
	{
		priting = status;
	}

	friend int Inuse(Printer1 p_1, Printer2 p_2);

private:
    int priting;
};

class Printer2
{
public:
	Printer2()
	{
		priting = 0;
	}

	void SetPrint(int status)
	{
		priting = status;
	}

	friend int Inuse(Printer1 p_1, Printer2 p_2);

private:
    int priting;
};

int Inuse(Printer1 p_1, Printer2 p_2)
{
	if (p_1.priting || p_2.priting)
		return 1;
	else
		return 0;
}

int main()
{
	Printer1 p_1;
	Printer2 p_2;

	if (!Inuse(p_1, p_2))
		cout << "Printer idle\n";

	cout << "Setting p_1 to printing...\n";
	p_1.SetPrint(1);
	if (!Inuse(p_1, p_2))
		cout << "How, printer in use\n";

	cout << "Turn off p_1...\n";
	p_1.SetPrint(0);
	if (!Inuse(p_1, p_2))
		cout << "Printer idle\n";

	cout << "Turn off p_2...\n";
	p_2.SetPrint(1);
	if (!Inuse(p_1, p_2))
		cout << "How printer in use\n";

	getch();
	return 0;
}
