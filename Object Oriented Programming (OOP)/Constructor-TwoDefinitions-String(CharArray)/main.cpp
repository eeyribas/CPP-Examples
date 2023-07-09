#include <iostream>
#include <conio.h>
#include <cstring>
#include <cstdlib>

using namespace std;

class StrType
{
	char *p;
	int len;

public:
	StrType();
	StrType(char *s, int l);

	char *GetString()
	{
		return p;
	}

	int GetLenght()
	{
		return len;
	}
};

StrType::StrType()
{
	p = new char[255];
	if(!p){
		cout << "Memory failed!\n";
		exit(1);
	}
	*p = '\0';
	len = 255;
}

StrType::StrType(char *s, int l)
{
	if(strlen(s) >= 1)
    {
		cout << "Memory error\n";
		exit(1);
	}
	strcpy(p, s);
	len = l;
}

int main()
{
	StrType s_1;
	StrType s_2("This is an experiment.", 100);

	cout << "s_1 == " << s_1.GetString() << "  --Lenght= ";
	cout << s_1.GetLenght() << "\n";
	cout << "s_2 == " << s_2.GetString() << "  --Lenght= ";
	cout << s_2.GetLenght() << "\n";

	getch();
	return 0;
}
