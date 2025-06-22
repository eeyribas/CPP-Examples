#include <iostream>
#include <conio.h>
#include <time.h>

#define ROWS 6
#define COLUMN 6

using namespace std;

int main()
{
    srand(time(NULL));

	int matrix[ROWS][COLUMN] ;
	int arr[ROWS];

	for (int i = 0; i < ROWS; i++) {
       for (int j = 0; j < COLUMN; j++)
			matrix[i][j] = rand() % 10;
	}

	cout << "------MATRIX-------" << endl;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLUMN; j++)
			cout << matrix[i][j] << "\t";
		cout << endl;
	}
	cout << "\n\n" << endl;

	cout << "---------INVERSE DIAGONAL--------" << endl;
	for (int i = 0; i < ROWS; i++)
		arr[i] = matrix[(ROWS - 1) - i][i];

	for (int i = 0; i < ROWS; i++)
		cout << arr[i] << '\t';
	cout << endl;

	getch();
	return 0;
}
