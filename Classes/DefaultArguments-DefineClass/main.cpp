#include <iostream>
#include <conio.h>

using namespace std;

class MyClass
{
	int x;

public:
	MyClass(int n = 0){
		x = n;
	}

	int GetX(){
		return x;
	}
};

int main()
{
	MyClass obj_1(10);
	MyClass obj_2;

	cout << "obj_1 == " << obj_1.GetX() << "\n";
	cout << "obj_2 == " << obj_2.GetX() << "\n";

	getch();
	return 0;
}
