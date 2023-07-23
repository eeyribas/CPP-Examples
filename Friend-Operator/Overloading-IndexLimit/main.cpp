#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

const int size = 5;

class ArrayType
{
	int a[size];

public:
	ArrayType()
	{
		for(int i = 0; i < size; i++)
			a[i] = i;
	}

	int &operator[](int i);
};

int &ArrayType::operator[](int i)
{
	if(i < 0 || i > size-1)
    {
		cout << "\nIndex = ";
		cout << i << " limit. Error.\n";
		exit(1);
	}

	return a[i];
}

int main()
{
	ArrayType obj;

	for(int i = 0; i < size; i++)
		cout << obj[i] << " ";
	obj[size + 100] = 99;

	getch();
	return 0;
}
