#include <iostream>
#include <conio.h>

using namespace std;

const int size = 5;

class ArrayType
{
public:
	ArrayType()
	{
		for (int i = 0; i < size; i++)
			arr[i] = i;
	}

	int operator[](int i)
	{
		return arr[i];
	}

private:
    int arr[size];
};

int main()
{
	ArrayType array_type;
	for (int i = 0; i < size; i++)
		cout << array_type[i] << " ";

	getch();
	return 0;
}
