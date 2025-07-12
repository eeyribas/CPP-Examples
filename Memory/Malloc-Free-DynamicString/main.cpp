#include <iostream>
#include <cstring>
#include <cstdlib>
#include <conio.h>

using namespace std;

class Str
{
public:
	Str(char *ptr);
	~Str();
	void Show();

	friend char *GetString(Str *obj);

private:
    char *p;
	int len;
};

Str::Str(char *ptr)
{
	len = strlen(ptr);
	p = (char *)malloc(len + 1);
	if (!p) {
		cout << "Memory error.\n";
		exit(1);
	}

	strcpy(p, ptr);
}

Str::~Str()
{
	cout << "p, free.\n";
	free(p);
}

void Str::Show()
{
	cout << p << " --lenght = " << len;
	cout << "\n";
}

char *GetString(Str *obj)
{
	return obj->p;
}

int main()
{
	Str s_1("This is a test!");
	char *s;
	s_1.Show();
	s = GetString(&s_1);
	cout << "s_1 = ";
	cout << s << "\n";

	getch();
	return 0;
}
