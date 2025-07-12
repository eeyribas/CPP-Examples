#include <iostream>
#include <cstring>
#include <cstdlib>
#include <conio.h>

using namespace std;

class Str
{
public:
	Str(char *s);
	Str(const Str &a);
	~Str()
	{
		delete[] p;
	}

	char *Get()
	{
		return p;
	}

private:
    char *p;
};

Str::Str(char *s)
{
	int l = strlen(s) + 1;
	p = new char[l];
	if (!p) {
		cout << "Alloction error.\n";
		exit(1);
	}

	strcpy(p, s);
}

Str::Str(const Str &a)
{
	int l = strlen(a.p) + 1;
	p = new char[l];
	if (!p)
		exit(1);

	strcpy(p, a.p);
}

void Show(Str x)
{
	char *s = x.Get();
	cout << s << "\n";
}

int main()
{
	Str a("Hello"), b("There");
	Show(a);
	Show(b);

	getch();
	return 0;
}
