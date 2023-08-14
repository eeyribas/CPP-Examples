#include <iostream>
#include <conio.h>

using namespace std;

union SwapBytes
{
	unsigned char c[2];
	unsigned i;
	SwapBytes(unsigned x);
	void Swap();
};

SwapBytes::SwapBytes(unsigned x)
{
	i = x;
}

void SwapBytes::Swap()
{
	unsigned char temp;
	temp = c[0];
	c[0] = c[1];
	c[1] = temp;
}

int main()
{
	SwapBytes ob(1);
	ob.Swap();
	cout << ob.i;

	getch();
	return 0;
}
