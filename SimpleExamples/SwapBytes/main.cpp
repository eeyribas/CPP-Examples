#include <iostream>
#include <conio.h>

using namespace std;

union SwapBytes
{
    SwapBytes(unsigned x);

	void Swap();

	unsigned char c[2];
	unsigned i;
};

SwapBytes::SwapBytes(unsigned x)
{
	i = x;
}

void SwapBytes::Swap()
{
	unsigned char temp = c[0];
	c[0] = c[1];
	c[1] = temp;
}

int main()
{
	SwapBytes obj(1);
	obj.Swap();
	cout << obj.i;

	getch();
	return 0;
}
