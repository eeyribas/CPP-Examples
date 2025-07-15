#include <iostream>
#include <conio.h>

using namespace std;

class B
{
public:
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

class D : public B
{
public:
	void SetJ(int n)
	{
	    j = n;
	}

	int Mul()
	{
	    return j * GetI();
	}

private:
    int j;
};

int main()
{
	D obj;
	obj.SetI(10);
	obj.SetJ(4);
	cout << obj.GetI() << "\n";
	cout << obj.Mul() << endl;

	getch();
	return 0;
}
