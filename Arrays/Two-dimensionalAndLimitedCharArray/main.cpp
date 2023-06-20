#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

class Array
{
	int size;
	char *p;

public:
	Array(int num);

	~Array()
	{
		delete [] p;
	}

	char &Put(int i);
	char Get(int i);
};

Array::Array(int num)
{
	p = new char[num];
	if(!p){
		cout << "Memory Error\n";
		exit(1);
	}
	size = num;
}

char &Array::Put(int i)
{
	if(i < 0 || i >= size){
		cout << "Limited Error\n";
		exit(1);
	}
	return p[i];
}

char Array::Get(int i)
{
	if(i < 0 || i >= size){
		cout << "Limited Error\n";
		exit(1);
	}
	return p[i];
}

int main()
{
	Array a(10);

	a.Put(3) = 'X';
	a.Put(2) = 'R';

	cout << a.Get(3) << a.Get(2);
	cout << "\n";

	a.Put(11) = '!';

	getch();
	return 0;
}
