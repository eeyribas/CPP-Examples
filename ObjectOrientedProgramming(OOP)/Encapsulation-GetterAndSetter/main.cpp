#include <iostream>
#include <conio.h>

using namespace std;

class MyClass
{
public:
	void Set(int num)
	{
        a = num;
	}

	int Get()
	{
	    return a;
	}

private:
    int a;
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
