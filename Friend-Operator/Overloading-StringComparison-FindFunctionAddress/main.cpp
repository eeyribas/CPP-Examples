#include <iostream>
#include <cstring>
#include <conio.h>
#include <cstdlib>

using namespace std;

class StrType
{
	char *p;
	int len;

public:
	StrType(char *s);

	~StrType()
	{
		cout << p << "p, being released\n";
		delete [] p;
	}

	char *Get()
	{
        return p;
	}

	StrType &operator=(StrType &ob);
};

StrType::StrType(char *s)
{
	int l = strlen(s) + 1;
	p = new char[l];
	if(!p){
		cout << "Memory allocation error\n";
		free(p);
	}
	len = l;
	strcpy(p, s);
}

StrType &StrType::operator=(StrType &ob)
{
	if(len < ob.len){
		delete [] p;
		p = new char[ob.len];
		if(!p){
			cout << "Memory allocation error\n";
			exit(1);
		}
	}
	len = ob.len;
	strcpy(p, ob.p);
	return *this;
}

int main()
{
	StrType a("Hello"), b("re");

	cout << a.Get() << "\n";
	cout << b.Get() << "\n";

	a = b;
	cout << a.Get() << "\n";
	cout << b.Get() << "\n";

	getch();
	return 0;
}
