#include <iostream>
#include <conio.h>

using namespace std;

class Pr2;

class Pr1
{
	int priting;

public:
	Pr1(){
		priting = 0;
	}

	void SetPrint(int status){
		priting = status;
	}

	friend int Inuse(Pr1 p_1, Pr2 p_2);
};

class Pr2
{
	int priting;

public:
	Pr2(){
		priting = 0;
	}

	void SetPrint(int status){
		priting = status;
	}

	friend int Inuse(Pr1 p_1, Pr2 p_2);
};

int Inuse(Pr1 p_1, Pr2 p_2)
{
	if(p_1.priting || p_2.priting)
		return 1;
	else
		return 0;
}

int main()
{
	Pr1 p_1;
	Pr2 p_2;

	if(!Inuse(p_1, p_2))
		cout << "Printer idle\n";

	cout << "Setting p1 to printing...\n";
	p_1.SetPrint(1);
	if(!Inuse(p_1, p_2))
		cout << "How, printer in use\n";

	cout << "Turn off p1...\n";
	p_1.SetPrint(0);
	if(!Inuse(p_1, p_2))
		cout << "Printer idle\n";

	cout << "Turn off p2...\n";
	p_2.SetPrint(1);
	if(!Inuse(p_1, p_2))
		cout << "How printer in use\n";

	getch();
	return 0;
}
