#include <iostream>
#include <cstring>
#include <conio.h>
#include <cstdlib>

using namespace std;

class Str
{
public:
	Str(char *s);
	~Str()
	{
		cout << p << "p, being released\n";
		delete[] p;
	}

	char *Get()
	{
        return p;
	}

	Str &operator=(Str &obj);

private:
    char *p;
	int len;
};

Str::Str(char *s)
{
	int l = strlen(s) + 1;
	p = new char[l];
	if (!p) {
		cout << "Memory allocation error\n";
		free(p);
	}
	len = l;
	strcpy(p, s);
}

Str &Str::operator=(Str &obj)
{
	if (len < obj.len) {
		delete[] p;
		p = new char[obj.len];
		if (!p) {
			cout << "Memory allocation error\n";
			exit(1);
		}
	}

	len = obj.len;
	strcpy(p, obj.p);

	return *this;
}

int main()
{
	Str a("Hello"), b("re");

	cout << a.Get() << "\n";
	cout << b.Get() << "\n";

	a = b;
	cout << a.Get() << "\n";
	cout << b.Get() << "\n";

	getch();
	return 0;
}
