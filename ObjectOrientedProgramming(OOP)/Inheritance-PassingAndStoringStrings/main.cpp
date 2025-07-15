#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

class Base
{
public:
	Base(char *s)
	{
		strcpy(str, s);
	}

	char *Get()
	{
		return str;
	}

private:
    char str[80];
};

class Derived : public Base
{
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

private:
    int len;
};

int main()
{
	Derived obj("hello");
	obj.Show();
	cout << obj.GetLength() << "\n";

	getch();
	return 0;
}
