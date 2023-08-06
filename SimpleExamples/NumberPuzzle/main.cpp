#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	int held = rand() % 10;
	int thrown;

	do
    {
		cout << "Enter number = ";
		cin >> thrown;

		if(thrown > held)
            cout << thrown << "'smaller than" << endl;
        else if(thrown<held)
            cout << thrown << "'bigger than" << endl;
	}while(thrown != held);

	cout << "Success!!!" << endl;

		getch();
		return 0;
}
