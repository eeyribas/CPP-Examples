#include <iostream>
#include <conio.h>

using namespace std;

class Sample
{
public:
	Sample()
	{
		cout << "Constructor.\n";
	}

	~Sample()
	{
		cout << "Deconstructor.\n";
	}

	void SetI(int n)
	{
	    i = n;
	}

	int GetI()
	{
		return i;
	}

private:
    int i;
};

int main()
{
	Sample *a = new Sample;
	a->SetI(10);
	cout << "a = " << a->GetI() << "\n";
	delete a;

	getch();
	return 0;
}
