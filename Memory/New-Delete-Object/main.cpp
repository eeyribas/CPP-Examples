#include <iostream>
#include <conio.h>

using namespace std;

class Sample
{
public:
	void SetIJ(int a, int b)
	{
		i = a;
		j = b;
	}

	int GetProduct()
	{
		return i * j;
	}

private:
    int i, j;
};

int main()
{
	Sample *p = new Sample;
	if (!p) {
		cout << "Memory error.\n";
		return 1;
	}

	p->SetIJ(4, 5);
	cout << "Result = " << p->GetProduct() << "\n";

	delete p;

	getch();
	return 0;
}
