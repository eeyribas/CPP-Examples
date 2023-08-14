#include <iostream>
#include <conio.h>

using namespace std;

class Test
{
public:
	Test(int = 0);
	void Print() const;

private:
	int x;
};

Test::Test(int a)
{
	x = a;
}

void Test::Print() const
{
    cout << "x = " << x << "\n this->x = " << this->x
         << "\n(*this).x = " << (*this).x << endl;
}

int main()
{
	Test test(12);
	test.Print();

	getch();
	return 0;
}
