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
	Sample *p = new Sample[10];
	if (!p) {
		cout << "Memory error.\n";
		return 1;
	}

	for (int i = 0; i < 10; i++)
		p[i].SetIJ(i, i);
	for (int i = 0; i < 10; i++) {
		cout << "*[" << i << "] == ";
		cout << p[i].GetProduct() << "\n";
	}

	delete[] p;

	getch();
	return 0;
}
