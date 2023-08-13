#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

#define ROWS    6
#define COLUMN  6

int main()
{
	int mat[ROWS][COLUMN] ;
	int d[ROWS];

	srand(time(NULL));
	for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLUMN; j++)
			mat[i][j] = rand() % 10;
	}

	cout << "------A matrix-------" << endl;
	for(int i = 0; i < ROWS; i++){
		for(int j = 0; j < COLUMN; j++)
			cout << mat[i][j] << "\t";
		cout << endl;
	}

	int row;
	cout << "Row no : ";
	cin >> row;

	for(int i = 0; i < COLUMN; i++)
		d[i] = mat[row - 1][i];

	cout << "----Rows-----" << endl;
	for(int i = 0; i < ROWS; i++)
		cout << d[i] << "\t";
	cout << endl;

	getch();
	return 0;
}
