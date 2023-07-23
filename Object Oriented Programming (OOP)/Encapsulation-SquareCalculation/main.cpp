#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

class SquareClass
{
	int i;
public:
	SquareClass(int n){
		i = n;
	}
	void SetI(int n){
        i = n;
	}
	int GetI(){
		return i;
	}

	int Calc()
	{
	    return sqrt(i);
	}
};

int main()
{
	SquareClass a(10);
	a.SetI(100);
	cout << "A Value : " << a.GetI() << "\n";
	cout << "Square : " << a.Calc();

	getch();
	return 0;
}
