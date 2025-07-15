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
		cout << "Destructor.\n";
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
	Sample *sample = new Sample;
	sample->SetI(10);
	cout << "Value = " << sample->GetI() << "\n";
	delete sample;

	getch();
	return 0;
}
