#include <iostream>
#include <conio.h>
#include <time.h>
#include <fstream>

#define ROWS 4
#define COLUMN 4

using namespace std;

int main()
{
	srand(time(NULL));
	int matrix[ROWS][COLUMN];

	ifstream f_in;
	f_in.open("data.txt");

	for (int i = 0; i < ROWS; i++) {
       for (int j = 0; j < COLUMN; j++)
			f_in >> matrix[i][j] ;
	}
	f_in.close();

	cout << "-------MATRIX--------" << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			cout << matrix[i][j] << "\t ";
		cout << endl;
	}

	for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int temp = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = temp;
		}
	}

    cout<<"-------MATRIX TRANSPOSE--------"<<endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }

	getch();
	return 0;
}
