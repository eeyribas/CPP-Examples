#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

enum Res {
    no,
    yes
};

enum Color {
    red,
    green,
    yellow,
    orange
};

void Out(enum Res x)
{
	if (x == no)
        cout << "no\n";
    else
        cout << "yes\n";
}

char *c[] = {"red", "green", "yellow", "orange"};

class Fruit
{
public:
    enum Res continueing;
	enum Res seasonal;
	enum Res tree;
	enum Res tropical;
	enum Color clr;
	char name[40];
};

class Apple : public Fruit
{
public:
	void SetA(char *n, enum Color c, enum Res ck,
              enum Res crchy, enum Res e);
	void Show();

private:
    enum Res for_cook;
    enum Res for_water;
    enum Res for_food;
};

void Apple::SetA(char *n, enum Color c, enum Res ck, enum Res crchy, enum Res e)
{
	strcpy(name, n);
	continueing = no;
	seasonal = yes;
	tree = yes;
	tropical = no;
	clr = c;
	for_cook = ck;
	for_water = crchy;
	for_food = e;
}

void Apple::Show()
{
	cout << name << " Apple : " << "\n";
	cout << "Cont. : ";
	Out(continueing);
	cout << "Seasonal : ";
	Out(seasonal);
	cout << "Tree : ";
	Out(tree);
	cout << "Tropical : ";
	Out(tropical);
	cout << "Color : " << c[clr] << "\n";
	cout << "For cook : ";
	Out(for_cook);
	cout << "For water : ";
	Out(for_water);
	cout << "For food : ";
	Out(for_food);
	cout << "\n";
}

class Orange : public Fruit
{
public:
	void SetO(char *n, enum Color c, enum Res ck, enum Res clrc, enum Res e);
	void Show();

private:
    enum Res juice;
	enum Res jam;
	enum Res food;
};

void Orange::SetO(char *n, enum Color c, enum Res ck, enum Res crchy, enum Res e)
{
	strcpy(name, n);
	continueing = no;
	seasonal = yes;
	tree = yes;
	tropical = yes;
	clr = c;
	juice = ck;
	jam = crchy;
	food = e;
}

void Orange::Show()
{
	cout << name << " Orange : " << "\n";
	cout << "Cont. : ";
	Out(continueing);
	cout << "Seasonal : ";
	Out(seasonal);
	cout << "Tree : ";
	Out(tree);
	cout << "Tropical : ";
	Out(tropical);
	cout << "Color : " << c[clr] << "\n";
	cout << "Juice : ";
	Out(juice);
	cout << "Jam : ";
	Out(jam);
	cout << "Food : ";
	Out(food);
	cout << "\n";
}

int main()
{
	Apple a_1, a_2;
	a_1.SetA("Red Delicious", red, no, yes, yes);
	a_1.Show();
	a_2.SetA("Jonathan", red, yes, no, yes);
	a_2.Show();

	Orange o_1, o_2;
	o_1.SetO("Navel", orange, no, no, yes);
	o_1.Show();
	o_2.SetO("Valencia", orange, yes, yes, no);
	o_2.Show();

	getch();
	return 0;
}
