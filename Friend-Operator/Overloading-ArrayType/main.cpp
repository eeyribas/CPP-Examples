#include <iostream>
#include <conio.h>

using namespace std;

const int size = 5;

class ArrayType
{
	int a[size];

public:
	ArrayType(){
		for(int i = 0; i < size; i++)
			a[i] = i;
	}

	int operator[](int i){
		return a[i];
	}
};

int main()
{
	ArrayType obj;

	for(int i = 0; i < size; i++)
		cout << obj[i] << " ";

	getch();
	return 0;
}
