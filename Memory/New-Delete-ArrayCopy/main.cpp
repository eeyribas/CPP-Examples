#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

class Array
{
	int *p;
	int size;

public:
	Array(int sz)
	{
        p = new int[sz];
		if(!p)
			exit(1);
		size = sz;
		cout << "Constructor\n";
	}

	~Array()
	{
		delete []p;
	}

	Array(const Array &sz);

	void Put(int i, int j)
	{
		if(i >= 0 && i < size)
			p[i] = j;
	}

	int Get(int i)
	{
		return p[i];
	}
};

Array::Array(const Array &a)
{
	size = a.size;
	p = new int[a.size];

	if(!p)
		exit(1);

	for(int i = 0; i < a.size; i++)
		p[i] = a.p[i];

	cout << "Copy constructor.\n";
}

int main()
{
	Array num(10);

	for(int i = 0; i < 10; i++)
		num.Put(i, i);

	for(int i = 9; i >= 0; i--)
		cout << num.Get(i) << "\n";

	Array x = num;
	for(int i = 0; i < 10; i++)
		cout << x.Get(i) << "\n";

	getch();
	return 0;
}
