#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

#define ROWS    4
#define COLUMN  4


void Init(int m[ROWS][COLUMN])
{
	srand(time(NULL));
	for(int i = 0; i < ROWS; i++)
        for(int j = 0; j < COLUMN; j++)
            m[i][j] = rand() % 10;
}

int Minimum(int m[ROWS][COLUMN])
{
	int minim = m[0][0];
	for(int i = 0; i < ROWS; i++)
		for(int j = 0; j < COLUMN; j++)
			if(m[i][j] < minim)
				minim = m[i][j];

	return minim;
}

void Print(int m[ROWS][COLUMN], int minim)
{
	for(int i = 0; i < ROWS; i++)
    {
		for(int j = 0; j < COLUMN; j++)
			cout << m[i][j] << " \t ";
		cout << endl;
	}
	cout << "\n\nMinumum = " << minim << endl;
}

int main()
{
	int m[ROWS][COLUMN];
	Init(m);
	Print(m, Minimum(m));

	getch();
	return 0;
}

