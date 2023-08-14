#include <iostream>
#include <conio.h>
#include <cstring>
#include <cstdlib>

using namespace std;

class StrType
{
	char *p;

public:
	StrType(char *s);
	StrType(const StrType &a);

	~StrType(){
		delete []p;
	}

	char *Get(){
		return p;
	}
};

StrType::StrType(char *s)
{
	int l = strlen(s) + 1;
	p = new char[l];
	if(!p){
		cout << "Alloction error.\n";
		exit(1);
	}
	strcpy(p, s);
}

StrType::StrType(const StrType &a)
{
	int l = strlen(a.p) + 1;
	p = new char[l];
	if(!p)
		exit(1);

	strcpy(p, a.p);
}

void Show(StrType x)
{
	char *s = x.Get();
	cout << s << "\n";
}

int main()
{
	StrType a("Hello"), b("There");
	Show(a);
	Show(b);

	getch();
	return 0;
}
