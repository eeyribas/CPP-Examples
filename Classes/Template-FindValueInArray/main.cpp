#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

template<class X>
int Find(X object, X *lst, int sze)
{
	for(int i = 0; i < sze; i++)
    {
        if(object == lst[i])
            return i;
    }

	return -1;
}

int main()
{
	int a[] = {1, 2, 3, 4};
	char *c = "This is a test.";
	double d[] = {1.1, 2.2, 3.3};

	cout << Find(3, a, 4) << endl;
	cout << Find('a', c, (int)strlen(c)) << endl;
	cout << Find(0.0, d, 3) << endl;

	getch();
	return 0;
}
