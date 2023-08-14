#include <iostream>
#include <conio.h>

using namespace std;

class Sample
{
protected:
    int a, b;

public:
	void SetAB(int n, int m){
		a = n;
		b = m;
	}
};

class Derived : public Sample
{
	int c;

public:
	void SetC(int m){
		c = m;
	}

	void ShowABC(){
		cout << a << "  " << b << "  " << c << "\n";
	}
};

int main()
{
	Derived obj;
	obj.SetAB(5, 7);
	obj.SetC(3);
	obj.ShowABC();

	getch();
	return 0;
}
