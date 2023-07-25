#include <iostream>
#include <conio.h>
#include <time.h>
#include <fstream>

using namespace std;

#define ROWS    4
#define COLUMN  4

int main()
{
	srand(time(NULL));
	int m[ROWS][COLUMN];

	ifstream f_in;
	f_in.open("data.txt");

	for(int i = 0; i < ROWS;i++)
		for(int j = 0; j < COLUMN; j++)
			f_in >> m[i][j] ;
	f_in.close();

	cout << "-------MATRIX--------" << endl;
	for(int i = 0; i < 4; i++)
    {
		for(int j = 0; j < 4; j++)
			cout << m[i][j] << "\t ";
		cout << endl;
	}

	int temp;
	for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            temp = m[i][j];
			m[i][j] = m[j][i];
			m[j][i] = temp;
		}
	}

    cout<<"-------MATRIX TRANSPOSE--------"<<endl;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
            cout << m[i][j] << "\t";
        cout << endl;
    }

	getch();
	return 0;
}
