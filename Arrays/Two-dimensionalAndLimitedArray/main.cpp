#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

class Array{
	int i_size, j_size;
	int *p;

public:
	Array(int i, int j);
	int &Put(int i, int j);
	int Get(int i, int j);
};

Array::Array(int i, int j)
{
	p = new int[i * j];
	if(!p){
		cout << "Memory Error\n";
		exit(1);
	}
	i_size = i;
	j_size = j;
}

int &Array::Put(int i, int j)
{
	if(i < 0 || i >= i_size || j < 0 || j >= j_size){
		cout << "Limited Error!!!\n";
		exit(1);
	}

	return p[i * j_size + j];
}

int Array::Get(int i, int j)
{
	if(i < 0 || i >= i_size || j < 0 || j >= j_size){
		cout << "Limited Error!!!\n";
		exit(1);
	}

	return p[i * j_size + j];
}

int main()
{
	Array a(2, 3);

	for(int i = 0; i < 2; i++){
       for(int j = 0; j < 3; j++)
			a.Put(i, j) = i + j;
	}

	for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++)
			cout << a.Get(i, j) << ' ';
	}

	a.Put(10, 10);

	getch();
	return 0;
}
