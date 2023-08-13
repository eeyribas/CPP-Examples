#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

template <class CoordinaatType>class Coordinaat
{
	CoordinaatType x, y;

public:
	Coordinaat(CoordinaatType i, CoordinaatType j){
		x = i;
		y = j;
	}

	void Show(){
		cout << x << ", " << y << endl;
	}
};

int main()
{
	Coordinaat<int> obj_1(1, 2), obj_2(3, 4);
	obj_1.Show();
	obj_2.Show();

	Coordinaat<double> obj_3(0.0, 0.23), obj_4(10.19, 3.098);
	obj_3.Show();
	obj_4.Show();

	getch();
	return 0;
}
