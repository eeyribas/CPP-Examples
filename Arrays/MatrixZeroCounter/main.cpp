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
			matrix[i][j] = rand() % 2 - 1;
	}

    cout << "-------MATRIX--------" << endl;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++)
            cout << matrix[i][j] << '\t';
        cout << endl;
    }

    int counter = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (matrix[i][j] == 0)
                counter++;
        }
    }

    cout << "\n\n" << "Number of zeros = " << counter << endl;

    getch();
    return 0;
}
