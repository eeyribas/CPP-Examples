#include <iostream>
#include <conio.h>

using namespace std;

class MyClass
{
	int who;

public:
	MyClass(int n){
		who = n;
		cout << "Constructor." << who << "\n";
	}

	~MyClass(){
		cout << "~Deconstructor." << who << "\n";
	}

	int id(){
		return who;
	}
};

void F(MyClass obj)
{
	cout << obj.id() << "\n";
}

int main()
{
	MyClass x(1);
	F(x);

	getch();
	return 0;
}
