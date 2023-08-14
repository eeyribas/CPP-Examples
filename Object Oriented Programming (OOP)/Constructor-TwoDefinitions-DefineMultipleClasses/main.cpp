#include <iostream>
#include <conio.h>

using namespace std;

class MyClass
{
	int x;

public:
	MyClass(){
		x = 0;
	}

	MyClass(int n){
		x = n;
	}

	int GetX(){
		return x;
	}
};

int main()
{
	MyClass obj_1[10];
	MyClass obj_2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	for(int i = 0; i < 10; i++){
		cout << "obj_1[" << i << "]" << obj_1[i].GetX();
		cout << '\n';
		cout << "obj_2[" << i << "]" << obj_2[i].GetX();
		cout << "\n";
	}

	getch();
	return 0;
}
