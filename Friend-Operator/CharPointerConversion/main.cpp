#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

class Str
{
public:
	Str(char *s)
	{
		strcpy(str, s);
		len = strlen(s);
	}

	operator char *()
	{
		return str;
	}

private:
    char str[80];
	int len;
};

int main()
{
	Str str_1("This a test.");
	char *p, str_2[80];

	p = str_1;
	cout << "Here is a string = " << p << "\n";
	strcpy(str_2, str_1);
	cout << "Copy string = " << str_2 << "\n";

	getch();
	return 0;
}
