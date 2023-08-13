#include <iostream>
#include <conio.h>

#define ROWS    2
#define COLUMN  2

using namespace std;

int main()
{
	int a[ROWS][COLUMN] = {2, 5, 47, 12};
	int b[ROWS][COLUMN] = {4, 41, 8, 1};
	int c[ROWS][COLUMN];

	cout << "---------A matrix--------" << endl;
	for(int i = 0; i < ROWS; i++){
		for(int j = 0; j < COLUMN; j++)
            cout << a[i][j] << "\t";
		cout << endl;
	}

	cout << "\n\n----------B matrix----------" << endl;
	for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLUMN; j++)
            cout << b[i][j] << '\t';
        cout << endl;
	}

	for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLUMN; j++)
			c[i][j] = 0;
	}

	for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLUMN; j++){
            for(int k = 0; k < ROWS; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
	}

	cout << "\n\n--------------C matrix----------" << endl;
	for(int i = 0; i < ROWS; i++){
		for(int j = 0; j < COLUMN; j++)
			cout << c[i][j] << '\t';
		cout << endl;
	}

	getch();
	return 0;
}
