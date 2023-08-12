#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

class Base
{
	char str[80];

public:
	Base(char *s)
	{
		strcpy(str, s);
	}

	char *Get()
	{
		return str;
	}
};

class Derived : public Base
{
	int len;

public:
	Derived(char *s) : Base(s)
	{
		len = strlen(s);
	}

	int GetLength()
	{
		return len;
	}

	void Show()
	{
		cout << Get() << "\n";
	}
};

int main()
{
	Derived obj("hello");
	obj.Show();
	cout << obj.GetLength() << "\n";

	getch();
	return 0;
}
