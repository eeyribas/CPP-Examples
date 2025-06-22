#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));

	int matrix[8][8];
	for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++)
            matrix[i][j] = rand() % 15;
	}

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++)
			cout << matrix[i][j] << '\t';
		cout << "\n\n";
	}

	getch();
	return 0;
}
