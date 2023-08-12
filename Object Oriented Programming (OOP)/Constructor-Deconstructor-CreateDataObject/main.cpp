#include <iostream>
#include <conio.h>
#include "data.h"

using namespace std;

int main()
{
    static Data sd(3);
	cout << " Static"<<endl;

	Data d(4);
	cout << " Main" << endl;

	getch();
    return 0;
}
