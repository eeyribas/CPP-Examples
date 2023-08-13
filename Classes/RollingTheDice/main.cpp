#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

class Dice
{
	int val;

public:
	void Roll(){
        val = (rand() % 6) + 1;
        cout << val << "\n";
	}
};

int main()
{
	Dice one, two;

	one.Roll();
	two.Roll();
	one.Roll();
	two.Roll();
	one.Roll();
	two.Roll();

	getch();
	return 0;
}
