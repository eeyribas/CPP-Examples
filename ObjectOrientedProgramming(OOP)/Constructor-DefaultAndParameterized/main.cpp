#include <iostream>
#include <conio.h>

using namespace std;

class Sample
{
public:
	Sample()
	{
		x = 0;
	}

	Sample(int a)
	{
		x = a;
	}

	int GetX()
	{
		return x;
	}

private:
    int x;
};

int main()
{
	Sample obj_1(10);
	Sample obj_2;
	cout << "obj-1 = " << obj_1.GetX() << "\n\n";
	cout << "obj-2 = " << obj_2.GetX() << "\n";

	getch();
	return 0;
}
