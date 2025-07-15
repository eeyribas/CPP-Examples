#include <iostream>
#include <conio.h>
#include "data.h"

using namespace std;

int main()
{
    static Data s_data(3);
	cout << " Static" <<endl;

	Data d_data(4);
	cout << " Main" << endl;

	getch();
    return 0;
}
