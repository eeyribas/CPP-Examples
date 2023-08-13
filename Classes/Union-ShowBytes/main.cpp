#include <iostream>
#include <conio.h>

using namespace std;

union Bytes
{
	Bytes(double n);
	void ShowBytes();
	double d;
	unsigned char c[sizeof(double)];
};

Bytes::Bytes(double n)
{
	d = n;
}

void Bytes::ShowBytes()
{
	for(int j = sizeof(double) - 1; j >= 0; j--){
		cout << "Bytes = " << j << " : ";

		for(int i = 128; i; i >>= 1){
            if(i & c[j])
                cout << "1";
			else
                cout << "0";
			cout << "\n";
		}
	}
}

int main()
{
	Bytes obj(1991.829);
	obj.ShowBytes();

	getch();
	return 0;
}
