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
	StrType(char *ptr){
        len = strlen(ptr);
		p = (char *) malloc(len + 1);

		if(!p){
			cout << "Memory error.\n";
			exit(-1);
		}
		strcpy(p, ptr);
	}

	~StrType(){
		cout << "p free.\n";
		free(p);
	}

	void Show(){
		cout << p << "  --length = " << len;
		cout << "\n";
	}
};

int main()
{
	StrType s_1("This is a test. "), s_2("I love C++.");
	s_1.Show();
	s_2.Show();

	getch();
	return 0;
}
