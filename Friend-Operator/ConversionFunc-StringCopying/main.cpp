#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

class StrType
{
	char str[80];
	int len;

public:
	StrType(char *s)
	{
		strcpy(str, s);
		len = strlen(s);
	}

	operator char *()
	{
		return str;
	}
};

int main()
{
	StrType s("This a test.");
	char *p, s_2[80];

	p = s;
	cout << "Here is a string = " << p << "\n";

	strcpy(s_2, s);
	cout << "Copy string = " << s_2 << "\n";

	getch();
	return 0;
}
