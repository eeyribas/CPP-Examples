#include <iostream>
#include <conio.h>

#define ROW     2
#define COLUMN  2

using namespace std;

int main()
{
	int a[ROW][COLUMN] = {2, 5, 47, 12};
	int b[ROW][COLUMN] = {4, 41, 8, 1};
	int c[ROW][COLUMN];

	cout << "---------A matrix--------" << endl;
	for(int i = 0; i < ROW; i++){
		for(int j = 0; j < COLUMN; j++)
            cout << a[i][j] << "\t";
		cout << endl;
	}

	cout << "\n\n----------B matrix----------" << endl;
	for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COLUMN; j++)
            cout << b[i][j] << '\t';
        cout << endl;
	}

	for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COLUMN; j++)
			c[i][j] = a[i][j] + b[i][j];
	}

	cout << "\n\n--------------C matrix----------" << endl;
	for(int i = 0; i < ROW; i++){
		for(int j = 0; j < COLUMN; j++)
			cout << c[i][j] << '\t';
		cout << endl;
	}

	getch();
	return 0;
}
