#include <iostream>
#include <conio.h>

using namespace std;

class MyClass
{
public:
	MyClass()
	{
		x = 0;
	}

	MyClass(int n)
	{
		x = n;
	}

	int GetX()
	{
		return x;
	}

	void SetX(int n)
	{
        x = n;
	}

private:
    int x;
};

int main()
{
	MyClass *p;
	MyClass obj(10);

	p = new MyClass[10];
	if (!p) {
		cout << "Memory failed.\n";
		return 1;
	}

	for (int i = 0; i < 10; i++)
		p[i] = obj;

	for (int i = 0; i < 10; i++) {
		cout << "p[" << i << "] == " << p[i].GetX();
		cout << "\n";
	}

	getch();
	return 0;
}
