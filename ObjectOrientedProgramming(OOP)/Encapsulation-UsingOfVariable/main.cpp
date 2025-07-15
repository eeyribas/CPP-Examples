#include <iostream>
#include <conio.h>

using namespace std;

class MyClass
{
	int a;

public:
	void Set(int num){
	    num = a;
	}

	int Get(){
	    return a;
	}
};

int main()
{
	MyClass obj_1, obj_2;
	obj_1.Set(12);
	obj_2.Set(99);

	cout << obj_1.Get() << "\n";
	cout << obj_2.Get() << endl;

	getch();
	return 0;
}
