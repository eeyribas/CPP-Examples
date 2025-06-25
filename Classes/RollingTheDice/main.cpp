#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

class Dice
{
public:
	void Roll()
	{
        val = (rand() % 6) + 1;
        cout << val << endl;
	}

private:
	int val;
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
