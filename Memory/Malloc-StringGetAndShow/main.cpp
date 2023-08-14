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
	StrType(char *ptr);
	~StrType();
	void Show();
	friend char *GetString(StrType *obj);
};

StrType::StrType(char *ptr)
{
	len = strlen(ptr);
	p = (char *)malloc(len + 1);
	if(!p){
		cout << "Memory error.\n";
		exit(1);
	}
	strcpy(p, ptr);
}

StrType::~StrType()
{
	cout << "p, free.\n";
	free(p);
}

void StrType::Show()
{
	cout << p << " --lenght = " << len;
	cout << "\n";
}

char *GetString(StrType *obj)
{
	return obj->p;
}

int main()
{
	StrType s_1("This is a test!");
	char *s;

	s_1.Show();
	s = GetString(&s_1);
	cout << "s_1 = ";
	cout << s << "\n";

	getch();
	return 0;
}
