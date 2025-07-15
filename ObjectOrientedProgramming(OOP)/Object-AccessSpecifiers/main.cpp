#include <iostream>
#include <conio.h>

using namespace std;

class Sample
{
public:
	Sample(int n, int m)
	{
        a = n;
		b = m;
	}

	int GetA()
	{
		return a;
	}

	int GetB()
	{
		return b;
	}

	int c;

protected:
	int b;

private:
    int a;
};

int main()
{
	Sample sample(10, 20);
	sample.c = 30;
	cout << sample.GetA() << "  " << sample.GetB()
         << "  " << sample.c << "\n";

	getch();
	return 0;
}
