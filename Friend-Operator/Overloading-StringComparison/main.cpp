#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

class Str
{
public:
	Str()
	{
		*str = '\0';
	}

	Str(char *p)
	{
		strcpy(str, p);
	}

	char *Get()
	{
		return str;
	}

	Str operator+(Str s);
	Str operator=(Str s);
	int operator<(Str s);
	int operator>(Str s);
	int operator==(Str s);

private:
    char str[80];
};

Str Str::operator+(Str s)
{
	Str tmp;
	strcpy(tmp.str, str);
	strcat(tmp.str, s.str);

	return tmp;
}

Str Str::operator=(Str s)
{
	strcpy(str, s.str);

	return *this;
}

int Str::operator<(Str s)
{
	return strcmp(str, s.str) < 0;
}

int Str::operator>(Str s)
{
	return strcmp(str, s.str) > 0;
}

int Str::operator==(Str s)
{
	return strcmp(str, s.str) == 0;
}

int main()
{
	Str str_1("Hello"), str_2("There"), str_3;
	str_3 = str_1 + str_2;
	cout << str_3.Get() << "\n";
	str_3 = str_1;

	if (str_1 == str_3)
		cout << "str_1 == str_3\n";
	if (str_1 > str_2)
		cout << "str_1 > str_2\n";
	if (str_1 < str_2)
		cout << "str_1 < str_2\n";

	getch();
	return 0;
}
