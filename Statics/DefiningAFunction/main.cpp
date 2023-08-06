#include <iostream>
#include <conio.h>

using namespace std;

class StaticFuncDemo
{
	static int i;

public:
	static void Init(int x)
	{
		i = x;
	}

	void Show()
	{
		cout << i << "\n";
	}
};

int StaticFuncDemo::i;

int main()
{
	StaticFuncDemo::Init(100);
	StaticFuncDemo x;
	x.Show();

	getch();
	return 0;
}
