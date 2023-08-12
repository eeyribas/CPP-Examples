#include <iostream>
#include <conio.h>
#include "time.h"

using namespace std;

int main()
{
    Time t_1, t_2(2), t_3(21, 34), t_4(12, 25, 42), t_5(27, 74, 99);

	cout << "1 - All argumans :\n ";
	t_1.Write();
	cout << "\n";
	t_1.WriteStandart();

	cout << "\n2 - All argumans :\n";
	t_2.Write();
	cout << "\n";
	t_2.WriteStandart();

	cout << "\n3 - All argumans :\n";
	t_3.Write();
	cout << "\n";
	t_3.WriteStandart();

	cout << "\n4 - All argumans :\n";
	t_4.Write();
	cout << "\n";
	t_4.WriteStandart();

	cout << "\n5 - All argumans :\n";
	t_5.Write();
	cout << "\n";
	t_5.WriteStandart();
	cout << endl;

	getch();
    return 0;
}
