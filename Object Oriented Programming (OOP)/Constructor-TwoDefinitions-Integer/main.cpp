#include <iostream>
#include <conio.h>

using namespace std;

class Sample
{
	int x;

public:
	Sample(){
		x = 0;
	}

	Sample(int a){
		x = a;
	}

	int GetX(){
		return x;
	}
};

int main()
{
	Sample obj_1(10);
	Sample obj_2;
	cout << "obj_1 = " << obj_1.GetX() << "\n\n";
	cout << "obj_2 = " << obj_2.GetX() << "\n";

	getch();
	return 0;
}
