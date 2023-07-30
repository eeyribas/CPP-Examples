#include <iostream>
#include <conio.h>

using namespace std;

class Sample
{
	int i, j;

public:
	Sample(int a, int b)
	{
		i = a;
		j = b;
	}

	int GetProduct()
	{
		return i * j;
	}
};

int main()
{
	Sample *p = new Sample(6, 5);
	if(!p)
    {
		cout << "Memory error.\n";
		return 1;
	}

	cout << "Result = " << p->GetProduct() << "\n";

	delete p;

	getch();
	return 0;
}
