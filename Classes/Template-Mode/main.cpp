#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

template <class X> X Mode(X *data, int sze)
{
	register int t, w;
	X md, old_md;
	int count, old_count;

	for(t = 0; t < sze; t++){
		md = data[t];
		count = 1;
		for(w = t + 1; w < sze; w++){
		   if(md == data[w])
				count++;
		}

		if(count > old_count){
			old_md = md;
			old_count = count;
		}
	}

	return old_md;
}

int main()
{
	int i[] = {1, 2, 3, 4, 2, 3, 2, 2, 1, 5};
	char *p = "This is a test.";

	cout << "Mode of i = " << Mode(i, 10) << endl;
	cout << "Mode of p = " << Mode(p, (int)strlen(p));

	getch();
	return 0;
}
