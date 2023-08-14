#include <iostream>
#include <conio.h>

using namespace std;

class Base
{
	int x;

public:
	void SetX(int n){
		x = n;
	}

	void ShowX(){
		cout << x << "\n";
	}
};

class Derived : public Base
{
	int y;

public:
	void SetY(int n){
		y = n;
	}

	void ShowY(){
		cout << y << "\n";
	}
};

int main()
{
	Derived obj;

	obj.SetX(10);
	obj.SetY(20);

	obj.ShowX();
	obj.ShowY();

	getch();
	return 0;
}
