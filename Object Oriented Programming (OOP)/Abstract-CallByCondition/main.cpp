#include <iostream>
#include <conio.h>

using namespace std;

class Base
{
public:
    int i;

	Base(int x){
		i = x;
	}

	virtual void Func(){
		cout << "Base - Func().\n";
		cout << i << "\n";
	}
};

class Derived1 : public Base
{
public:
	Derived1(int x) : Base(x){}

    void Func(){
        cout << "Derived1 - Func().\n";
		cout << i * i << "\n";
	}
};

class Derived2 : public Base
{
public:
	Derived2(int x) : Base(x){}

    void Func(){
		cout << "Derived2 - Func().\n";
		cout << i * i << "\n";
	}
};

int main()
{
	Base *p;
	Derived1 d_obj_1(10);
	Derived2 d_obj_2(10);
	int j;

	for(int i = 0; i < 10; i++){
		j = rand();
		if((j %2))
			p = &d_obj_1;
		else
			p = &d_obj_2;
		p->Func();
	}

	getch();
	return 0;
}
