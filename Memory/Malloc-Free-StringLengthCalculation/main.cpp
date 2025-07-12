#include <iostream>
#include <cstring>
#include <cstdlib>
#include <conio.h>

using namespace std;

class Str
{
public:
	Str(char *ptr)
	{
        len = strlen(ptr);
		p = (char *) malloc(len + 1);
		if (!p) {
			cout << "Memory error.\n";
			exit(-1);
		}

		strcpy(p, ptr);
	}

	~Str()
	{
		cout << "p free.\n";
		free(p);
	}

	void Show()
	{
		cout << p << "  --length = " << len;
		cout << "\n";
	}

private:
    char *p;
	int len;
};

int main()
{
	Str s_1("This is a test. "), s_2("I love C++.");
	s_1.Show();
	s_2.Show();

	getch();
	return 0;
}
