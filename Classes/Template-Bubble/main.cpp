#include <iostream>
#include <conio.h>

using namespace std;

template <class X> void Bubble(X *data, int sze)
{
	X t;

	for(int a = 0; a < sze; a++)
    {
        for(int b = sze - 1; b >= a; b--)
        {
           if(data[b - 1] > data[b])
           {
				t = data[b - 1];
				data[b - 1] = data[b];
				data[b] = t;
			}
        }
	}
}

int main()
{
	int i[] = {3, 2, 5, 6, 1, 8, 9, 3, 6, 9};
	double d[] = {1.2, 5.5, 2.2, 3.3};
	Bubble(i, 10);
	Bubble(d, 4);

	for(int j = 0; j < 10; j++)
		cout << i[j] << '  ';
	cout << endl;

	for(int j = 0; j < 4; j++)
		cout << d[j] << '  ';
	cout << endl;

	getch();
	return 0;
}
