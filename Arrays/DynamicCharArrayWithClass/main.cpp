#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

class Array
{
	int length;
	char *p;

public:
	Array(int num);
	~Array();

	char &Put(int i);
	char Get(int i);
};

Array::Array(int num)
{
	p = new char[num];
	if (!p) {
		cout << "Memory Error\n";
		exit(1);
	}
	length = num;
}

Array::~Array()
{
    delete[] p;
}

char &Array::Put(int i)
{
	if (i < 0 || i >= length) {
		cout << "Limited Error\n";
		exit(1);
	}

	return p[i];
}

char Array::Get(int i)
{
	if (i < 0 || i >= length) {
		cout << "Limited Error\n";
		exit(1);
	}

	return p[i];
}

int main()
{
	Array arr(10);
	arr.Put(3) = 'X';
	arr.Put(2) = 'R';
	cout << arr.Get(3) << arr.Get(2);
	cout << "\n";
	arr.Put(11) = '!';

	getch();
	return 0;
}
