#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

class StrType
{
	char s[80];
public:
	StrType()
	{
		*s='\0';
	}

	StrType(char *p)
	{
		strcpy(s, p);
	}

	char *Get()
	{
		return s;
	}

	StrType operator+(StrType s2);
	StrType operator=(StrType s2);
	int operator<(StrType s2);
	int operator>(StrType s2);
	int operator==(StrType s2);
};

StrType StrType::operator+(StrType s2)
{
	StrType temp;
	strcpy(temp.s, s);
	strcat(temp.s, s2.s);

	return temp;
}

StrType StrType::operator=(StrType s2)
{
	strcpy(s, s2.s);

	return *this;
}

int StrType::operator<(StrType s2)
{
	return strcmp(s, s2.s)<0;
}

int StrType::operator>(StrType s2)
{
	return strcmp(s, s2.s)>0;
}

int StrType::operator==(StrType s2)
{
	return strcmp(s, s2.s)==0;
}

int main()
{
	StrType str_1("Hello"), str_2("There"), str_3;

	str_3 = str_1 + str_2;
	cout << str_3.Get() << "\n";

	str_3 = str_1;
	if(str_1 == str_3)
		cout << "str_1 == str_3\n";
	if(str_1 > str_2)
		cout << "str_1 > str_2\n";
	if(str_1 < str_2)
		cout << "str_1 < str_2\n";

	getch();
	return 0;
}
