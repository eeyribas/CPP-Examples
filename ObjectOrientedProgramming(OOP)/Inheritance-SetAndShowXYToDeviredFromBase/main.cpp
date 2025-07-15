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

class Derived : private Base
{
	int y;

public:
	void SetXY(int n, int m){
		SetX(n);
		y = m;
	}

	void ShowY(){
		ShowX();
		cout << y << "\n";
	}
};

int main()
{
	Derived obj;
	obj.SetXY(10, 20);
	obj.ShowY();

	getch();
	return 0;
}
