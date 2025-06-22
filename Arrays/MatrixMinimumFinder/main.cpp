#include <iostream>
#include <conio.h>
#include <time.h>

#define ROWS 4
#define COLUMN 4

using namespace std;

void Init(int matrix[ROWS][COLUMN])
{
	srand(time(NULL));

	for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMN; j++)
            matrix[i][j] = rand() % 10;
	}
}

int Minimum(int matrix[ROWS][COLUMN])
{
	int minim = matrix[0][0];
	for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMN; j++) {
            if (matrix[i][j] < minim)
				minim = matrix[i][j];
        }
	}

    return minim;
}

void Print(int matrix[ROWS][COLUMN], int minim)
{
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLUMN; j++)
			cout << matrix[i][j] << " \t ";
		cout << endl;
	}
	cout << "\n\nMinumum = " << minim << endl;
}

int main()
{
	int matrix[ROWS][COLUMN];
	Init(matrix);
	Print(matrix, Minimum(matrix));

	getch();
	return 0;
}
