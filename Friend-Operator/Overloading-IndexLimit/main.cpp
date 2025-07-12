#include <iostream>
#include <cstdlib>
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

	int &operator[](int i);

private:
    int arr[size];
};

int &ArrayType::operator[](int i)
{
	if (i < 0 || i > size - 1) {
		cout << "\nIndex = ";
		cout << i << " limit. Error.\n";
		exit(1);
	}

	return arr[i];
}

int main()
{
	ArrayType array_type;
	for (int i = 0; i < size; i++)
		cout << array_type[i] << " ";
	array_type[size + 100] = 99;

	getch();
	return 0;
}
