#include <iostream>
#include <conio.h>

using namespace std;

class Demo
{
	mutable int i;
	int j;
public:
	int GetI() const
	{
		return i;
	}

	void SetI(int x) const
	{
		i = x;
	}
};

int main()
{
	Demo obj;
	obj.SetI(1900);
	cout << obj.GetI();

	getch();
	return 0;
}

