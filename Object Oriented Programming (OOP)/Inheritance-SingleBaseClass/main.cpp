#include <iostream>
#include <conio.h>

using namespace std;

class B1
{
	int a;

public:
	B1(int x){
		a = x;
	}

	int GetA(){
		return a;
	}
};

class D1 : public B1
{
	int b;

public:
	D1(int x, int y) : B1(y){
		b = x;
	}

	int GetB(){
		return b;
	}
};

class D2 : public D1
{
	int c;

public:
	D2(int x, int y, int z) : D1(y, z){
		c = x;
	}

	void Show(){
		cout << GetA() << "  " << GetB() << "  " << c << "\n";
	}
};

int main()
{
	D2 obj(5, 8, 1);
	obj.Show();
	cout << obj.GetA() << "  " << obj.GetB() << "\n";

	getch();
	return 0;
}
