#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

template<class X> int Find(X object, X *lst, int sze)
{
	for (int i = 0; i < sze; i++) {
        if (object == lst[i])
            return i;
    }

	return -1;
}

int main()
{
	int i_arr[] = {1, 2, 3, 4};
	char *ch = "This is a test.";
	double d_arr[] = {1.1, 2.2, 3.3};

	cout << Find(3, i_arr, 4) << endl;
	cout << Find('a', ch, (int)strlen(ch)) << endl;
	cout << Find(0.0, d_arr, 3) << endl;

	getch();
	return 0;
}
